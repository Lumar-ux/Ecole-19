#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int size;
    int i;

    i = 0;
    
if (min >= max)
{
    return (NULL);
}
size = max - min;
range = malloc((size) * sizeof(int));
if (range == NULL)
{
    return (0);
}
while (min < max)
{
    range[i] = min;
    i++;
    min++;
}
return (size);
}
int main()
{
    int i;
    int min;
    int max;
    int *nb[];
    
    i = 0;
    min = 1;
    max = 10;
    int *res1 = ft_ultimate_range(nb, min, max);
    while (i < nb)
    {
    printf("%d\n", res1[i]);
    i++;
    }
    free(res1);
    return (0);
}
