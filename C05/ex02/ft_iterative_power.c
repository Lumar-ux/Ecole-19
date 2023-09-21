#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
int i;
int set_nb;

i = 1;
set_nb = 1;
while (i <= power)
{
    set_nb = set_nb * nb;
    i++;
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

/*int main(void)
{
     int nb;
     int pui;

    nb = 4;
    pui = 3;
    
    printf("%d", ft_iterative_power(nb, pui));
    return (0);
}*/