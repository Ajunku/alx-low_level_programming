#include "main.h"

/**
 * rev_strng - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

voidrev_string(var * s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
