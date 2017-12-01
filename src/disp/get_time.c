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
	my_printf("%s\t%s", ctime(&sb->st_mtime), ctime(&sb->st_mtime));
}
