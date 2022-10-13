#include "main.h"
/**
 * jack_bauer - prints every minutes of the day
 * starting with 00.00 to 23.59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, mins, min;

	for (mins= 0; mins < (60 * 24); mins++)
	{
		h = mins / 60;
		min = mins % 60;
		_putchar(48 + (h / 10));
		_putchar(48 + (h % 10));
		_putchar(':');
		_putchar(48 + (s / 10));
		_putchar(48 + (s % 10));
		_putchar('\n');
	}
}
