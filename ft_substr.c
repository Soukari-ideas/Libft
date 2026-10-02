#include <stdlib.h>
#include <stddef.h>

static  size_t ft_strlen(char const *c)
{
    size_t  i;

    i = 0;
    while (c[i])
        i++;
    return (i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{  
    char     *result;
    size_t  i;
    size_t  s_len;

    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        result = malloc(1);
        if (!result)
            return (NULL);
        result[0] = '\0';
        return (result);
    }
    result = malloc((s_len - start) + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (s[start + i] != '\0' && i < len)
    {
        result[i] = s[start + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}
/*
#include <stdio.h>

int main(void)
{
    char    montest[] = "Ceci est un test adequois";
    char    *tab;

    tab = ft_substr(montest, 10, 42);
    printf("%s", tab);
    free(tab);
    return (0);
}
*/
