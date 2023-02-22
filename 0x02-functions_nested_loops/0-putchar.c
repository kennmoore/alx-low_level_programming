#include "main.h"
/**
 * main - prints the string "Keneth" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "Kenneth";
	int i;

	for (i = 0; i < 7; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
