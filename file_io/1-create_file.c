#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: (1) ou (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int w, o, l;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
			;
	}

	o = open(filename, O_CREAT | O_RDWR| O_TRUNC, 0600);
	w = write(o, text_content, l);

	if (w == -1 || o == -1)
		return (-1);

	close(o);
	return (1);
}
