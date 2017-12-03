/*
** EPITECH PROJECT, 2017
** File Name : count_files.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void count_files(info_t *info, char *path)
{
	DIR *d = opendir(path);
	struct dirent *dir;
	char *path_file;

	info->total = 0;
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			if (dir->d_name[0] != '.') {
				path_file = concat(path, dir->d_name);
				stat(path_file, &info->sb);
				info->total += info->sb.st_blocks;
			}
			info->nb_files++;
		}
		closedir(d);
	}
	info->total /= 2;
}
