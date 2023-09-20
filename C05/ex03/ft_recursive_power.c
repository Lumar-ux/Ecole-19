#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
int i;
int set_nb;

i = 1;
set_nb = 1;
if (nb > 1 && i <= power)
{
    set_nb = set_nb * nb * ft_recursive_power(nb - 1, i + 1);
}
if(power < 0)
{
    return (0);
}
if(nb == 0)
{
    return (1);
}
return (set_nb);
}

int main(void)
{
     int nb;
     int pui;

    nb = 4;
    pui = 3;
    
    printf("%d", ft_recursive_power(nb, pui));
    return (0);
}