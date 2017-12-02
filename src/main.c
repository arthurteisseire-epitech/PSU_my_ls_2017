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

	ac--;
	av++;
	info.name = ".";
	stat(info.name, &info.sb);
	list_dir(&info);
	//disp_all(&sb, av[0]);
	return (0);
}
