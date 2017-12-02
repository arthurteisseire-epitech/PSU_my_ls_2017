/*
** EPITECH PROJECT, 2017
** File Name : get_filetype.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

static const dict_t filetypes[] = {
	{S_IFREG, '-'},
	{S_IFDIR, 'd'},
	{S_IFLNK, 'l'},
	{S_IFSOCK, 's'},
	{S_IFBLK, 'b'},
	{S_IFCHR, 'c'},
	{S_IFIFO, 'p'}
};

void get_filetype(struct stat *sb)
{
	for (int i = 0; i < 7; i++)
		if ((sb->st_mode & S_IFMT) == filetypes[i].nb) {
			my_putchar(filetypes[i].c);
			return;
	}
}
