#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int nbm;

    nbm = nb - 1;
while(nb > 0 && nbm > 0)
{
    nb = nb * nbm;
    nbm--;
}
if(nb <= 0 && nbm <= 0)
{
    return (0);
}
return (nb);
}
int main(void)
{
    int nb;

    nb = 4;
    
    printf("%d",ft_iterative_factorial(nb));
    return (0);
}