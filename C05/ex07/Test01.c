#include <stdio.h>
#include <unistd.h>

int ft_find_next_prime(int nb)
{
    int div;

    div = 2;

    while(1)
    {
        if (nb > 1)
        {
            while (div < nb)
            {
                if (nb % div == 0)
                {
                    break;
                }
                div++;
            }

            if (div == nb)
            {
                return nb;
            }
        }

        nb++;
        div = 2;
    }
}

int main()
{
    int nb;
    int res1;

    nb = 710;
    res1 = ft_find_next_prime(nb);
    printf("%d", res1);
    return 0;
}
