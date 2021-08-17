#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
int len;
for (len = 0; str[len] != '\0'; len++)
;
return (len);
}

/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1(Success) or -1(Failure)
 */
int create_file(const char *filename, char *text_content)
{
int fd, bytes_wrote;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fd == -1)
return (-1);
if (!text_content)
{
close(fd);
return (1);
}

bytes_wrote = wrote = write(fd, text_content, _strlen(text_content));

if (bytes_wrote == -1 || bytes_wrote != _strlen(text_content))
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
