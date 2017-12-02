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
#include <dirent.h>
#include <unistd.h>
#include "dict.h"
#include "info_t.h"

int print_filemode(struct stat *sb);
void list_dir(info_t *info);
void get_time(struct stat *sb);
void get_user(struct stat *sb);
void get_hard_link(struct stat *sb);
void get_size(struct stat *sb);
void get_rights(struct stat *sb);
void get_name(char *name);
void put_filetype(struct stat *sb);
void disp_all(struct stat *sb, char *path_name);

#endif
