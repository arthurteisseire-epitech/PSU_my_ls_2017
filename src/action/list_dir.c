/*
** EPITECH PROJECT, 2017
** File Name : list_dir.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void list_dir(info_t *info, format_f format, char *path, DIR *d)
{
	char *path_file;
	struct dirent *dir;
	
	while ((dir = readdir(d)) != NULL) {
		info->curr_file++;
		info->name = dir->d_name;
		path_file = concat(path, info->name);
		stat(path_file, &info->sb);
		format(info);
	}
	closedir(d);
}
