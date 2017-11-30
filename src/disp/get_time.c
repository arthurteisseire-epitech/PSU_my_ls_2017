/*
** EPITECH PROJECT, 2017
** File Name : get_time.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void get_time(struct stat *sb)
{
	my_printf("\nLast status change: %s", ctime(&sb->st_ctime));
	my_printf("Last file access: %s\n", ctime(&sb->st_atime));
	my_printf("Last file modification: %s\n", ctime(&sb->st_mtime));
}
