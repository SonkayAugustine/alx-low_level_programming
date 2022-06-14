#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(cahr *str)
{
size_t i;
for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t len;

if (filename == NULL)
return (-1);
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1_
return (-1);
if text_content != NULL)
len = write(file, text_content, _strlen(text_content));
close(file);
if (len == -1)
return (-1);
return (1);
}
