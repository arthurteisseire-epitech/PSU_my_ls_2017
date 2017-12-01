/*
** EPITECH PROJECT, 2017
** File Name : get_rights.c
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

static const int rights[] = {
	S_IRUSR, S_IWUSR, S_IXUSR,
	S_IRGRP, S_IWGRP, S_IXGRP,
	S_IROTH, S_IWOTH, S_IXOTH
};

void get_rights(struct stat *sb)
{
	char const *template = "rwx";

	put_filetype(sb);
	for (int i = 0; i < 9; i++) {
		if (sb->st_mode & rights[i])
			my_putchar(template[i % 3]);
		else
			my_putchar('-');
	}
	my_putchar(' ');
}

void put_filetype(struct stat *sb)
{
	for (int i = 0; i < 7; i++)
		if ((sb->st_mode & S_IFMT) == filetypes[i].nb)
			my_putchar(filetypes[i].c);
}
