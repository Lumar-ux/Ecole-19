#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
    int *tab;
    int cmp;
    int i;

    i = 0;
    
if (min >= max)
{
    return (NULL);
}
cmp = max - min;
tab = malloc((cmp) * sizeof(int));
if (tab == NULL)
{
    return (0);
}
while (min < max)
{
    tab[i] = min;
    i++;
    min++;
}
return (tab);
}

int main()
{
    int *res1 = ft_range(1, 10);
    printf("%d\n", *res1);
    free(res1);
    return (0);
}
