/*
** EPITECH PROJECT, 2017
** File Name : count_files.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

int count_files(info_t *info)
{
	DIR *d = opendir(info->name);
	struct dirent *dir;
	int total = 0;

	if (d) {
		while ((dir = readdir(d)) != NULL) {
			stat(info->name, &info->sb);
			total += info->sb.st_blksize;
			info->nb_files++;
		}
		closedir(d);
	}
	return (total);
}
