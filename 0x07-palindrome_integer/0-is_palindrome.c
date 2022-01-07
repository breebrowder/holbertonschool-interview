#include "palindrome.h"

/**
 * is_palindrome - checks whether a given unsigned integer is a palindrome
 *
 * @n: the number to be checked
 * Return: 1 if n is a palindrome, and 0 otherwise
 */

int is_palindrome(unsigned long n)
{
	unsigned long rev;
	unsigned long tmp;
	unsigned long last_digit;

	rev = 0;
	tmp = n;

	while (tmp)
	{
		last_digit = tmp % 10;
		rev = (rev * 10) + last_digit;
		tmp = tmp / 10;
	}

	return (rev == n); /* compare both nums */
}

/* rev reverses the unsigned long n */
