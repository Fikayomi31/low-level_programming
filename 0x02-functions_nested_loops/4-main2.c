#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha2('H');
    _putchar(r + '0');
    r = _isalpha2('o');
    _putchar(r + '0');
    r = _isalpha2(108);
    _putchar(r + '0');
    r = _isalpha2(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
