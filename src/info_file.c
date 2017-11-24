/*
** EPITECH PROJECT, 2017
** File Name : info_file.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "my.h"
#include "info.h"

void put_info(char *path_name, struct stat *sb)
{
	stat(path_name, sb);
	my_printf("FILE NAME: %s\n", path_name);
	printf("FILE MODE: %u\n", sb->st_mode);
	printf("INODE : %lu\n", sb->st_ino);
	printf("NB OF HARD LINK: %lu\n", sb->st_nlink);
	printf("FILE SIZE: %lu\n", sb->st_size);
	printf("ALLOCATED SPACE ON DRIVE: %lu\n", sb->st_blksize);
	printf("MINOR: %u\n", minor(sb->st_dev));
	printf("MAJOR: %u\n", major(sb->st_dev));
	my_printf("User ID: %u\n", sb->st_uid);
	my_printf("Group ID: %u\n", sb->st_gid);
	my_printf("\nLast status change: %s", ctime(&sb->st_ctime));
	my_printf("Last file access: %s", ctime(&sb->st_atime));
	my_printf("Last file modification: %s\n", ctime(&sb->st_mtime));

	print_filemode(sb);
}

int print_filemode(struct stat *sb)
{
	switch (sb->st_mode & S_IFMT) {
		case S_IFBLK:  
			return (my_printf("block device\n"));
		case S_IFCHR:  
			return (my_printf("character device\n"));
		case S_IFDIR:  
			return (my_printf("directory\n"));
		case S_IFIFO:  
			return (my_printf("FIFO/pipe\n"));
		case S_IFLNK:  
			return (my_printf("symlink\n"));
		case S_IFREG:  
			return (my_printf("regular file\n"));
		case S_IFSOCK: 
			return (my_printf("socket\n"));
		default:       
			return (my_printf("unknown?\n"));
	}
}
