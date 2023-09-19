#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_wr(int argc, char *argv[])
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
}
int main(int argc, char *argv[])
{
    int i;
    int n;
    int temp;

    n = 1;
    while (argv[n][i] != '\0')
        {
            if((argv[n][i] >= 33) && (argv[n][i] <= 126))
            {
                if(argv[n + 1][i] > argv[n][i])
                 n++;
                 if(argv[n + 1][i] < argv[n][i])
                    {
                    temp = argv[n][i];
                    argv[n][i] = argv[n + 1][i];
                    argv[n + 1][i] = temp;
                    n = 1;
                    }     
            }
		}
        ft_wr(argc, argv);
    return (0);
    }
