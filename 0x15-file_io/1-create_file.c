#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - finds the length of string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
size_t i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1(Success) or -1(Failure)
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0;

if (filename == NULL)
return (-1);
fd = open(filename, 0_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content != NULL)
len = write(fd, text_content, _strlen(text_content));
close(fd);
if (len == -1)
return (-1);
return (-1);
}

close(fd);
return (1);
}
