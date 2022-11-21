#include <stdio.h>
#include <stdlib.h>
/**
 * close_file - Closes file descriptors.
 * @file: The file closed.
 * Return: ()
 */
vois close_file(char *file)
{
	int fi;

	fi = close(file);

	if (fi == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
