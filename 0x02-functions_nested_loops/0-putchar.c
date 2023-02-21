
char _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always Return 0
 */
int main(void)
{
	char *sh = "Kenneth";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
