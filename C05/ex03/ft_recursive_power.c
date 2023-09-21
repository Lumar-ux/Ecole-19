#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
if (power < 1)
{
    return (1);
}
    nb = nb * ft_iterative_power(nb, power - 1);

if(power < 0)
{
    return (0);
}
if(nb == 0)
{
    return (1);
}
return (nb);
}

/*int main(void)
{
     int nb;
     int pui;

    nb = 3;
    pui = 3;
    
    printf("%d", ft_iterative_power(nb, pui));
    return (0);
}*/