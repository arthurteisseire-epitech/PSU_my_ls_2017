/*
** EPITECH PROJECT, 2017
** File Name : get_size.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void get_size(struct stat *sb)
{
	my_printf("%u ", (unsigned) sb->st_size);
}
