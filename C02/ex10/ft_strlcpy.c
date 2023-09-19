#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_wr(int argc, char *argv[])
{
    int i;
    int n;
    n = 1;
while(n < argc )
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
int diff(char *n1, char *n2)
{
    while(*n1 &&(*n1 == *n2))
    {
        n1++;
        n2++;
    }
    return (*n1 - *n2);
}
int main(int argc, char *argv[])
{
    int i;
    int n;
    //int j;
    int temp;

    n = 1;
    while(n < argc - 1)
    {
    //n = j + 1;
    i = 0;
    while (argv[n][i] != '\0')
        {
                 if ((argv[n][i] >= 32) && (argv[n][i] <= 127) 
                    && diff(&argv[n][i], &argv[n + 1][i]) > 0)
                    {
                    temp = argv[n][i];
                    argv[n][i] = argv[n + 1][i];
                    argv[n + 1][i] = temp;
                    n = 0;
                    //n++;
                    //j++;
                    } 
                    i++;   
                    n++;
            }
            i = 0;
		}
        //ft_wr(argc, argv);
    
    if(argv[n][i] > 9)
	{
		main(argc, argv[n][i] / 10);
		main(argc, argv[n][i] % 10);
	}
	else
	{
		ft_wr(argc, argv[n][i] + 48);
	}
    return (0);
}

/*if((argv[n][i] >= 33) && (argv[n][i] <= 126))
            {*/
               /* if(argv[n + 1][i] > argv[n][i])
                 n++;*/
