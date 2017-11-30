/*
** EPITECH PROJECT, 2017
** File Name : list_dir.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void list_dir(char *dir_name)
{
	DIR *d = opendir(dir_name);
	struct dirent *dir;

	if (d) {
		while ((dir = readdir(d)))
			my_printf("%s\n", dir->d_name);
		closedir(d);
	}
}
