/*
** EPITECH PROJECT, 2017
** File Name : get_time.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void get_time(struct stat *sb)
{
	char *res = ctime(&sb->st_mtime);
	char *end;

	while (*res != ' ')
		res++;
	res++;
	end = res;
	while (*end != ':')
		end++;
	*(end + 3) = '\0';
	my_printf(res);
	my_putchar(' ');
}
