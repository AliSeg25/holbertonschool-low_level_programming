#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Create a function that creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return:(0) ou (1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for(l = 0; text_content[l] != '\0'; l++)
			;
	}

	o = open(filename, O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return(-1);

	close(0);

	return(0);
}
