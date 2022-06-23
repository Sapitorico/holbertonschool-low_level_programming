#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
    int i, n;
    char *c;
    
    if (str == 0)
        return (NULL);
    for(i = 0; str[i]; i++);
    
    c = malloc(sizeof(char)* i);
    if (c == 0)
    {
        return (NULL);
    }
    for (n = 0; n < i; n++)
    {
        c[i] = str[n];
    }
        return (c);
}
