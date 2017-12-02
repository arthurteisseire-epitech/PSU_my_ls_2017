/*
** EPITECH PROJECT, 2017
** File Name : default_action.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void default_action(info_t *info, format_f format)
{
	DIR *d = opendir(info->name);
	struct dirent *dir;

	if (d) {
		while ((dir = readdir(d))) {
			info->name = dir->d_name;
			format(info);
		}
		closedir(d);
	}
}
