/*
** EPITECH PROJECT, 2017
** File Name : get_rights.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

static const int rights[] = {
	S_IRUSR, S_IWUSR, S_IXUSR,
	S_IRGRP, S_IWGRP, S_IXGRP,
	S_IROTH, S_IWOTH, S_IXOTH
};

void get_rights(struct stat *sb)
{
	char const *template = "rwx";

	for (int i = 0; i < 9; i++) {
		if (sb->st_mode & rights[i])
			my_putchar(template[i % 3]);
		else
			my_putchar('-');
	}
	my_putchar(' ');
}
