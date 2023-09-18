#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int n;

    n = 3;

    while(n < argc && n > 0)
    {
    i = 2;
    while (argv[n][i] != '\0')
        {
        write (1, &argv[n][i], 1);
		i++;
		}

    write (1, "\n", 1)s;
    n--;
    }
    return (0);
}