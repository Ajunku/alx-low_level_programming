#include "main.h"

/**
 * print_last_digit - function that prints last digt
 *
 * @n: funcion parameter
 *
 * Return: l
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = -l;
	return (l);
}
