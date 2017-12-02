/*
** EPITECH PROJECT, 2017
** File Name : info_t.h
** File description:
** By Arthur Teisseire
*/

#ifndef STAT_H
#define STAT_H

typedef struct info {
	char *name;
	struct stat sb;
	int nb_files;
	int curr_file;
	int nb_args;
	int total;
} info_t;

#endif
