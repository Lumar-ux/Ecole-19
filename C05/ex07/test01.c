#include <stdio.h>

int ft_is_prime(int nb) 
{
    int div;
    
    div = 2;
    if (nb < 2) 
    {
        return (0);
    }
    while (div * div <= nb) 
    {
        if (nb % div == 0) 
        {
            return (0);
        }
        div++;
    }
    return (1);
}

int ft_find_next_prime(int nb) 
{
    int ok;
    
    ok = 1;
    if (nb < 2) 
    {
        return (2);
    }
    while (ok == 1) 
    {
        nb++;
        if (ft_is_prime(nb)) 
        {
            return (nb);
        }
    }
    return(0);
}

int main() 
{
    int nb = 1678;
    int res1 = ft_find_next_prime(nb);
    printf("%d",res1);
    return 0;
}