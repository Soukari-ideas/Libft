#include <stdlib.h>
#include <stddef.h>

static int  ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(const char *s)
{
    int i;
    int len;
    char    *result;
    char    *p;

    p = (char *)s;
    len = ft_strlen(p);
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (p[i])
    {
        result[i] = p[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}
/*
#include <stdio.h>

int main(void)
{
    const char    chaine[30] = "j'adore mon setup portable.";
    char    *copy;

    copy = ft_strdup(chaine);
    printf("%s\n", copy);
    free(copy);
    return (0);
}
*/
