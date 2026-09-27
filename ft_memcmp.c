#include <stddef.h>

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
    unsigned char    *ptr1;
    unsigned char   *ptr2;
    size_t          i;

    ptr1 = (unsigned char *)pointer1;
    ptr2 = (unsigned char *)pointer2;
    i = 0;
    while (i < size)
    {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char    chaine1[13] = "voyons voir.";
    char    chaine2[12] = "voyons vir.";
    int     function;
    size_t  size;

    size = 12;
    function = ft_memcmp(chaine1, chaine2, size);
    printf("%d\n", function);
    return (0);
}
*/
