#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
    int tab;
    int i;

    i = 0;
    tab[] = max - min;
if (min < max)
{
    return (NULL);
}
tab = malloc((min) + 1 * sizeof(int));
if (min == max)
{
    return (NULL);
}
while (i < max)
{
    tab[i];
    i++;
    tab++;
}
return (tab);
}

int main()
{
    //int tab[2] = {1,10};
    int *res1 = ft_range(1, 10);
    printf("%d\n", *res1);
    free(res1);
    return (0);
}
