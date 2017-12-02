/*
** EPITECH PROJECT, 2017
** File Name : action.h
** File description:
** By Arthur Teisseire
*/

#ifndef OPTIONS_H
#define OPTIONS_H

#include "info_t.h"

typedef void (*action_f)(info_t *, void (*)(info_t *));

typedef struct action {
	char arg;
	action_f f;
} action_t;

#endif
