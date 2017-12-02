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
	get_name(info->name);
	if (info->curr_file != info->nb_files)
		my_putchar(' ');
	else
		my_putchar('\n');
}
