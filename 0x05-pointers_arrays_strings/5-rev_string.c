#include "main.h"
#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: Variable
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, len;

	char t;

	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}