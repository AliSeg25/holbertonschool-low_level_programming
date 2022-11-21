#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Write a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: (0) ou (w)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t *printl;
	ssize_t o, r, w;

	printl = malloc(sizeof(ssize_t));

	if (printl == NULL)
		return (0);

	o = open(filename,  O_RDONLY);/*on ouvre le fichier en lecture*/
	r = read(o, printl, letters);/*lire juqu'a count octets (letters)*/
	w = write(1, printl, r);/*Ecrit jusqu'a tant de octet(r)*/


	if (o == -1 || r == -1 || w != r)
	{
		free(printl);
		return (0);
	}

	close(o);
	return (w);
}
