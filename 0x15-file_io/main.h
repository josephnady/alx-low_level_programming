/*
 * File_name: main.h
 * Created: 5th of September, 2023
 * Auth: Joseph Nady Fouad
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#ifndef MAIN_H
#define MAIN__H "main.h"

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif