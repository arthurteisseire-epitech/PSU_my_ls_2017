/*
** EPITECH PROJECT, 2017
** File Name : recursive.h
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void recursive(info_t *info, format_f format)
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
