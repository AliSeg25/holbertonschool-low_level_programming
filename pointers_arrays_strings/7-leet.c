#include"main.h"
/**
* *leet - Write a function that encodes a string into 1337.
* @st: pointeur
* Return: (r)
*/
char *leet(char *st)
{
	char *r = st;
	int i = 0;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	while (*st '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*st == a[i] || *st == a[i] - 32)
			{
				*st = n[i] + 0;
			}
		}
		st++;
	}
	return (r);
}
