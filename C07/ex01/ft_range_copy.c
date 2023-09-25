#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

//int ft_strlen(int *src)
/*{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return(i);
}*/
            //tab[]={1,10} / 2
int *ft_range(int min, int max)
{
    int *newtab;
    int i;

    i = 0;
if (min[i] < min[1])
{
  newtab = malloc((min) + 1 * sizeof(int));
}
/*if ((min[0] > min[1]) || (min[0] == max[1]))
{
    return (NULL);
}*/
while (i < min)
{
    newtab[i + 1] = min[i];
    i++;
}
return (newtab);
}

int main()
{
    int tab[2] = {1,10};
    int *res1 = ft_range(tab, 2);
    printf("%d\n", *res1);
    free(res1);
    return (0);
}
