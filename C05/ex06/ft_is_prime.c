#include <stdio.h>
#include <unistd.h>

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
int main()
{
    int nb;
    int res1;

    nb = 1884748379;
res1 = ft_is_prime(nb);
printf("%d", res1);
return (0);
}