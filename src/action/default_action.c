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

	count_files(info, path);
	if (d)
		list_dir(info, format, path, d);
	else {
		stat(info->name, &info->sb);
		format(info);
	}
}
