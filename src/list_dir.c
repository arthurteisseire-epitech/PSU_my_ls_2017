/*
** EPITECH PROJECT, 2017
** File Name : list_dir.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void list_dir(info_t *info)
{
	DIR *d = opendir(info->name);
	struct dirent *dir;
	void (*format)(info_t *info) = disp_all;

	if (d) {
		while ((dir = readdir(d))) {
			//my_printf("%s ", dir->d_name);
			info->name = dir->d_name;
			format(info);
			my_putchar('\n');
		}
		closedir(d);
	}
}
