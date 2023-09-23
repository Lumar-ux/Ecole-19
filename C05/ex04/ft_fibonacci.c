#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
    {
    return (-1);
    }
    if (index == 0)
    {
    return (0);
    }
        if (index == 1 || index == 2)
        return (1);
            if(index >= 3)
            return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));

    return(index);
}

int main()
{
    int index;

    index = 7;
    printf("%d",ft_fibonacci(index));
    return(0);
}