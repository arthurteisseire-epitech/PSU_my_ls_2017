/*
** EPITECH PROJECT, 2017
** File Name : disp_all.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void l_format(info_t *info)
{
	if (info->name[0] != '.') {
		get_filetype(&info->sb);
		get_rights(&info->sb);
		get_hard_link(&info->sb);
		get_user(&info->sb);
		get_size(&info->sb);
		get_time(&info->sb);
		get_name(info->name);
		my_putchar('\n');
	}
}
