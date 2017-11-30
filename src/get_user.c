/*
** EPITECH PROJECT, 2017
** File Name : get_user.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

void get_user(struct stat *sb)
{
	struct passwd *ui = getpwuid(sb->st_uid);
	struct group *gi = getgrgid(sb->st_gid);

	my_printf("USER NAME: %s\n", ui->pw_name);
	my_printf("GROUP NAME: %s\n", gi->gr_name);
}
