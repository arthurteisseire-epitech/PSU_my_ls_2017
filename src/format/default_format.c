/*
** EPITECH PROJECT, 2017
** File Name : normal_format.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void default_format(info_t *info)
{
	if (info->name[0] != '.') {
		get_name(info->name);
		if (info->curr_file != info->nb_files)
			my_putstr("  ");
		else
			my_putchar('\n');
	} else
		if (info->curr_file == info->nb_files)
			my_putchar('\n');
}
