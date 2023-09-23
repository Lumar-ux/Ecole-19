#include <stdio.h>
#include <unistd.h>
void ft_check(int nb)
{

}
int ft_find_next_prime(int nb)
{
    int check;
    if (nb != 2 && nb != 1)
    {
    if ((((nb % 1) == 0) && ((nb % nb) == 0) && (nb % (2) != 0) && ((nb % (3) != 0))))
    { 
    ft_check(nb);
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