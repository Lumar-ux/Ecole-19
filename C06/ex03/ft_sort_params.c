#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_wr(char *str)
{
    int i;
    
i = 0;
    while (str[i] != '\0')
        {
        write (1, &str[i], 1);
		i++;
		}
    write (1, "\n", 1);
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
void ft_sort_params(int argc, char *argv[])
{
   int i;
    char *temp;

    i = 1;
    while(i < argc - 1)
    {
                 if ((diff(argv[i], argv[i + 1])) > 0)
                    {
                    temp = argv[i];
                    argv[i] = argv[i + 1];
                    argv[i + 1] = temp;
                    i = 0;
                    }
                    else
                    i++;  
		}
        i = 1;
        while(i < argc)
        {
   ft_wr(argv[i]);
   i++;
        }
}
int main(int argc, char *argv[])
{
ft_sort_params(argc, argv);
return (0);
}
