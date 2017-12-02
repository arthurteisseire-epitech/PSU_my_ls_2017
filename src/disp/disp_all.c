/*
** EPITECH PROJECT, 2017
** File Name : disp_all.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void disp_all(struct stat *sb, char *path_name)
{
	stat(path_name, sb);
	get_rights(sb);
	get_hard_link(sb);
	get_user(sb);
	get_size(sb);
	get_time(sb);
	get_name(path_name);
}
