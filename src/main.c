/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

int main(int ac, char **av)
{
	info_t info;
	format_f format = default_format;
	action_f action = default_action;

	ac--;
	av++;
	info.nb_args = 0;
	for (int i = 0; i < ac; i++) {
		if (av[i][0] == '-') {
			info.name = av[i];
			stat(info.name, &info.sb);
			action = get_action(&info);
			format = get_format(&info);
		} else
			info.nb_args++;
	}
	info.name = ".";
	if (info.nb_args == 0) {
		action(&info, format);
	} else
		list_files(&info, av, action, format);
	return (0);
}
