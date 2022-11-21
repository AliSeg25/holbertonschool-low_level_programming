#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * close_file - Closes file descriptors.
 * @dfile: The file descriptor closed.
 * Return: ()
 */
void close_file(int dfile)
{
	int dfi;

	dfi = close(dfile);

	if (dfi == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dfi);
		exit(100);
	}
}
/**
 * alloc_memoire - Allocates to memoire.
 * @file: The name file.
 * Return: (buffer)
 */
char *alloc_memoire(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);

		exit(99);
	}
	return (buffer);
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array to the arguments.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int dest, src, r, w;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = alloc_memoire(argv[2]);

	src = open(argv[1], O_RDONLY);
	r = read(src, buffer, 1024);
	w = write(src, buffer, 1024);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(src, buffer, 1024);

	while (r > 0)
	{
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(dest, buffer, r);

		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(dest, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}

	close_file(src);
	close_file(dest);
	free(buffer);
	return(0);
}
