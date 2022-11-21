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
