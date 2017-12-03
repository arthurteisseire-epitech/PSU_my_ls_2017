/*
** EPITECH PROJECT, 2017
** File Name : get_group.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void get_group(struct stat *sb)
{
	struct group *gi = getgrgid(sb->st_gid);

	my_printf("%s ", gi->gr_name);
}
