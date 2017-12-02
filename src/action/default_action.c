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
	DIR *d = opendir(info->name);
	struct dirent *dir;
	
	count_files(info);
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			info->curr_file++;
			info->name = dir->d_name;
			stat(info->name, &info->sb);
			format(info);
		}
		closedir(d);
	}
}
