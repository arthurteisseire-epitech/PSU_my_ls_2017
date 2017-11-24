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
	my_ls(av, &sb);
	return (0);
}
