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
#include <stdlib.h>
#include "dict.h"
#include "info_t.h"
#include "format.h"
#include "action.h"

//int print_filemode(struct stat *sb);
void list_dir(info_t *info);
void get_time(struct stat *sb);
void get_user(struct stat *sb);
void get_hard_link(struct stat *sb);
void get_size(struct stat *sb);
void get_rights(struct stat *sb);
void get_filetype(struct stat *sb);
void get_name(char *name);

void l_format(info_t *info);
void default_format(info_t *info);

void recursive(info_t *info, format_f format);
void default_action(info_t *info, format_f format);

void list_files(info_t *info, char **av, action_f action, format_f format);

int count_files(info_t *info);

action_f get_action(info_t *info);
format_f get_format(info_t *info);

#endif
