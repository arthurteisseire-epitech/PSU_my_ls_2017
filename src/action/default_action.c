/*
** EPITECH PROJECT, 2017
** File Name : default_action.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void default_action(info_t *info, format_f format)
{
	char *path = info->name;
	DIR *d = opendir(path);
	struct dirent *dir;
	char *path_file;
	
	count_files(info, path);
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			info->curr_file++;
			info->name = dir->d_name;
			path_file = concat(path, info->name);
			stat(path_file, &info->sb);
			format(info);
		}
		closedir(d);
	}
}
