#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
 int i;
 int j;

 i = 2;
 j = 1;
 while (nb > 0)
 {
    if ((nb % j) == 0)
    {
    return (j);
    }
    j++;
    i = i + 2;
 }
 return (0);
}
int main()
{
    long int nb = 2147483647;
    //max int : 2147483647
    int res1 = ft_sqrt(nb);
    printf("%d",res1);
    return 0;
}
