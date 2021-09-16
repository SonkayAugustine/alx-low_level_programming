#ifndef MAIN_H
#define MAIN_H

/* dprintf */
#include <stdio.h>
/* malloc, free */
#include <stdlib.h>
/* close */
#include <unistd.h>
/* open */
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
