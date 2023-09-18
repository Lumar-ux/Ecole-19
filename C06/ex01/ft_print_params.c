#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_wr(char c)
{
    write (1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (argv[i] != '\0' && 3 > argc - 1)
    {
		if(i < 3)
		{
        ft_wr(*argv[i]);
		i++;
		}
   	}
    ft_wr ('\n');
    return (0);
}
