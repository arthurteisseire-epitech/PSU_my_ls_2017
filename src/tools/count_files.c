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

	info->total = 0;
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			if (dir->d_name[0] != '.') {
				stat(dir->d_name, &info->sb);
				info->total += info->sb.st_blocks;
			}
			info->nb_files++;
		}
		closedir(d);
	}
	info->total /= 2;
}
