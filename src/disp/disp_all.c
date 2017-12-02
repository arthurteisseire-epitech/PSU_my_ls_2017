/*
** EPITECH PROJECT, 2017
** File Name : disp_all.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void disp_all(info_t *info)
{
	stat(info->name, &info->sb);
	get_rights(&info->sb);
	get_hard_link(&info->sb);
	get_user(&info->sb);
	get_size(&info->sb);
	get_time(&info->sb);
	get_name(info->name);
}
