/*
** EPITECH PROJECT, 2017
** File Name : count_files.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void count_files(info_t *info)
{
	DIR *d = opendir(info->name);
	struct dirent *dir;

	if (d) {
		while ((dir = readdir(d)) != NULL)
			info->nb_files++;
		closedir(d);
	}
}
