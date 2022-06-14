#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Entry Point
 * @filename: file name
 * @letters: size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t lenr, lenw;

char *buf;

if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(file);
return (0);
}
lenr = read(file, buf, letters);
close(file);
if (lenr == -1)
{
free(buf);
return (0);
}
lenw = write(STDOUT_FILENO, buf, lenr);
free(buf);
if (lenr != lenw)
return (0);
return (lenw);
}
