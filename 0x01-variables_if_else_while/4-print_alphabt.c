#include <stdio.h>

/**
 *main - Entry point of program
 *Return: 0(Success)
 */
int main(void)
{
	char letter = 'a';

	do {
		if (letter == 'e' || letter == 'q')
		{
			letter += 1;
			continue;
		}
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');
	return (0);
}
