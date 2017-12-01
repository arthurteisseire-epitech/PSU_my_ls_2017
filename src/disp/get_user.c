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

	my_printf("%s ", ui->pw_name);
	my_printf("%s ", gi->gr_name);
}
