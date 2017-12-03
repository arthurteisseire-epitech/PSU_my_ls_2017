/*
** EPITECH PROJECT, 2017
** File Name : exec.c
** File description:
** By Arthur Teisseire
*/

#include "info.h"

static const format_t formats[] = {
	{'g', g_format},
	{'l', l_format},
	{'1', one_format}
};

static const action_t action[] = {
	{'R', recursive}
};

action_f get_action(info_t *info)
{
	int i;

	for (int opt_i = 0; opt_i < NB_ACTION; opt_i++) {
		i = 1;
		while (info->name[i] != '\0') {
			if (info->name[i] == action[opt_i].arg)
				return (action[opt_i].f);
			i++;
		}
	}
	return (default_action);
}

format_f get_format(info_t *info)
{
	int i;

	for (int format_i = 0; format_i < NB_FORMAT; format_i++) {
		i = 1;
		while (info->name[i] != '\0') {
			if (info->name[i] == formats[format_i].arg)
				return (formats[format_i].f);
			i++;
		}
	}
	return (default_format);
}
