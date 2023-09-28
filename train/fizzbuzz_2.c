#include <unistd.h>
void ft_wr(char a)
{
    //a = a + '0';
    write(1, &a, 1);
}
void ft_putnbr(int nb)
{
        if(nb > 9)
        {
            ft_putnbr(nb / 10);
            ft_putnbr(nb % 10);
        }
        else
        {
        ft_wr(nb + 48);
        }
}

int main(void)
{
    int nb;

    nb = 1;
    while (nb <= 100)
    {
        if (nb % 3 == 0)
        {
            write (1, "fizz", 4); 
        }
        else if (nb % 5 == 0)
        {
            write (1, "buzz", 4);
        }
        else if (nb % 3 == 0 && nb % 5 == 0)
        {
            write (1, "fizzbuzz", 4);
        }
        ft_putnbr(nb);
        write (1, "\n", 1); 
        nb++;
    }
}