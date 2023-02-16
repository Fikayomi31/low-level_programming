#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi1("98");
    printf("%d\n", nb);
    nb = _atoi1("-402");
    printf("%d\n", nb);
    nb = _atoi1("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi1("214748364");
    printf("%d\n", nb);
    nb = _atoi1("0");
    printf("%d\n", nb);
    nb = _atoi1("Suite 402");
    printf("%d\n", nb);
    nb = _atoi1("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi1("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
