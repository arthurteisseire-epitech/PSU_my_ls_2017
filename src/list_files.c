/*
** EPITECH PROJECT, 2017
** File Name : list_files.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

void list_files(info_t *info, char **av, action_f action, format_f format)
{
	for (int i = 0; i < info->nb_args; i++) {
		if (av[i][0] != '-') {
			info->name = av[i];
			action(info, format);
		}
	}
}
