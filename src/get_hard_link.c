/*
** EPITECH PROJECT, 2017
** File Name : get_hard_link.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void get_hard_link(struct stat *sb)
{
	my_printf("NB OF HARD LINK: %d\n", (int) sb->st_nlink);
}
