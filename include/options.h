/*
** EPITECH PROJECT, 2017
** File Name : options.h
** File description:
** By Arthur Teisseire
*/

#ifndef OPTIONS_H
#define OPTIONS_H

typedef struct option {
	char c;
	void (*f)(struct stat *sb);
} option_t;

#endif
