#include <stdio.h>

int ft_recursive_factorial(int nb)
{
int nbm;

nbm = 1;
if(nb > 1)
{
nbm = nbm * nb * ft_recursive_factorial(nb - 1);
//nb = nb - 1; 
}
if(nb <= 0)
{
    return (0);
}
return (nbm);
}
/*int main(void)
{
    int nb;

    nb = 4;
    
    printf("%d",ft_recursive_factorial(nb));
    return (0);
}*/