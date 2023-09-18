#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int n;

    n = 1;

    while(n < argc)
    {
    i = 0;
    while (argv[n][i] != '\0')
        {
        write (1, &argv[n][i], 1);
		i++;
		}

    write (1, "\n", 1);
    n++;
    }
    return (0);
}