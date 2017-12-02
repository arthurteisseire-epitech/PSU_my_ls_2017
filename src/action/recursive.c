/*
** EPITECH PROJECT, 2017
** File Name : recursive.h
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void recursive(info_t *info, void (*format)(info_t *))
{
	DIR *d = opendir(info->name);
	struct dirent *dir;

	if (d) {
		while ((dir = readdir(d)) != NULL) {
			info->name = dir->d_name;
			stat(info->name, &info->sb);
			format(info);
		}
		closedir(d);
	}
}