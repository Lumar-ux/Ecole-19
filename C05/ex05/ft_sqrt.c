#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    int mul;
    //int i;
    long int covnb;
    //long int mulsup;
    //int power;

    mul = 1;
    covnb = nb;
    /*mulsup = 1;
    i = 1;
    power = 4;
while (i <= power)
{
    mulsup = mulsup * covnb;
    i++;
}*/
while (mul * mul <= covnb) 
    {
        if (mul * mul == covnb) 
        {
            return (mul);
        }
        mul++;
    }
   return (0); 
}
int main()
{
    long int nb = 2147483647;
    //max int : 2147483647
    int res1 = ft_sqrt(nb);
    printf("%d",res1);
    return 0;
}