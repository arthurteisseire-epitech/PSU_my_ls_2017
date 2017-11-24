/*
** EPITECH PROJECT, 2017
** File Name : info.h
** File description:
** By Arthur Teisseire
*/

#ifndef INFO_H
#define INFO_H

#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <sys/sysmacros.h>
#include <unistd.h>
#include <dirent.h>

void my_ls(char **path_names, struct stat *sb);
int print_filemode(struct stat *sb);
void list_dir(char *dir_name);

#endif
