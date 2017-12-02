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
	action_f action = default_action;
	format_f format = default_format;

	ac--;
	av++;
	for (int i = 0; i < ac; i++) {
		if (av[i][0] == '-') {
			info.name = av[i];
			stat(info.name, &info.sb);
			action = get_action(&info);
			format = get_format(&info);
		}
	}
	for (int i = 0; i < ac; i++) {
		info.name = av[i];
		stat(info.name, &info.sb);
		if (av[i][0] != '-')
			action(&info, format);
	}
	return (0);
}
