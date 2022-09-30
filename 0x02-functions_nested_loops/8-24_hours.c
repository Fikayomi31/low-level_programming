#include "main.h"
/**
 * jack_bauer - prints every minutes of the day
 * starting with 00.00 to 23.59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m, s;

	for (m = 0; m < (60 * 24); m++)
	{
		h = m / 60;
		s = min % 60;
		_putchar(48 + (h / 10));
		_putchar(48 + (h % 10));
		_putchar(':');
		_putchar(48 + (s / 10));
		_putchar(48 + (s % 10));
		_putchar('\n');
	}
}
