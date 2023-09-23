#include <stdio.h>
#include <unistd.h>
/*void ft_check(int nb)
{
while ((((nb % 1) == 0) && ((nb % nb) == 0) && (nb % (2) != 0) && ((nb % (3) != 0))))
{
    nb++;
}
}*/
int ft_find_next_prime(int nb)
{
    /*if (nb != 2 && nb != 1)
    {*/
    //ft_check(nb);
    int div;

    div = 2;
    if(nb != 1 && nb != 0)
    {
        while(nb > 0)
        {
            if ((((nb % div) == 0) && ((nb % nb) == 0) && (nb % (div) != 0)/* && ((nb % (div) != 0))*/))
            {
            div++;
            /*if ((nb % (div) != 0) && (nb % (div) != 0))*/
            {
            return (nb);
            }
            }
            if ((nb != 3) && (nb != 2))
            {
                nb++;
            }
            else
            {    
                return (nb);
            }*/
        }
    }
            return (nb);
}
int main()
{
    int nb;
    int res1;

    nb = 710;
res1 = ft_find_next_prime(nb);
printf("%d", res1);
return (0);
}