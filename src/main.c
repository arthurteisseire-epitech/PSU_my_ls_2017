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
	struct stat sb;

	ac--;
	av++;
	//list_dir(".");
	stat(av[0], &sb);
	disp_all(&sb, av[0]);
	return (0);
}
