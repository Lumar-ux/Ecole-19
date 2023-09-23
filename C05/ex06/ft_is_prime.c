#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    //int check;
    if (nb != 0 && nb != 1)
    {
    if ((((nb % 1) == 0) && ((nb % nb) == 0) && (nb % (2) != 0) && ((nb % (3) != 0))))
    { 
    return (1);
    }
    else
    {    
    return (0);
    }
    }
return (nb);
}
int main()
{
    int nb;
    int res1;

    nb = 2;
res1 = ft_is_prime(nb);
printf("%d", res1);
return (0);
}