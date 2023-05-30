#include <stdio.h>
#include <string.h>

char *_concat(char *s1, char *s2)
{
    int length = strlen(s1);
    int i;

    /* store s2 into s1 */
    for (i = 0; s2[i] != '\0'; i++, length++)
    {
        s1[length] = s2[i];
    }
    s1[length] = '\0';

    return s1;
}

int main(void)
{
    char s1[100];
    char *dup;

    strcpy(s1, "alx");
    dup = _concat(s1, "book");

    printf("%s\n", dup);
    return 0;
}

