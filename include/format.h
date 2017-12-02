/*
** EPITECH PROJECT, 2017
** File Name : format.h
** File description:
** By Arthur Teisseire
*/

#ifndef FORMAT_H
#define FORMAT_H

#include "info_t.h"

typedef void (*format_f)(info_t *);

typedef struct format {
	char arg;
	format_f f;
} format_t;

#endif
