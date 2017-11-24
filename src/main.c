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

	if (ac != 2)
		return (84);
	put_info(av[1], &sb);
	return (0);
}
