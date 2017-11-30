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
	//my_ls(av, &sb);
	get_time(&sb);
	get_user(&sb);
	get_hard_link(&sb);
	get_size(&sb);
	get_name(av[0]);
	return (0);
}
