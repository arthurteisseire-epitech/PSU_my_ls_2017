/*
** EPITECH PROJECT, 2017
** File Name : one_format.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void one_format(info_t *info)
{
	if (info->name[0] != '.') {
		get_name(info->name);
		my_putchar('\n');
	}
}
