/*
** EPITECH PROJECT, 2017
** File Name : concat.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "info.h"

char *concat(char *str1, char *str2)
{
	int len1 = my_strlen(str1);
	int len2 = my_strlen(str2);
	char *res = malloc(sizeof(char) * (len1 + len2 + 2));
	int i = 0;

	while (*str1 != '\0') {
		res[i] = *str1;
		str1++;
		i++;
	}
	res[i] = '/';
	i++;
	while (*str2 != '\0') {
		res[i] = *str2;
		str2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
