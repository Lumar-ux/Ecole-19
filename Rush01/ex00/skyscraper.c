#include <unistd.h>
#include <stdio.h>

void ft_print_puzzle(int puzzle[4][4])
{
    int i;
    int j;    i = 0;
    j = 0;
    char    numb_str[2];
    while (i < 4)
    {
        while (j < 4)
        {
            numb_str[0] = puzzle[i][j] + '0';
            numb_str[1] = ' ';
            write(1, numb_str, 2);
            j++;
        }
        j = 0;
        i++;
        write(1, "\n", 1);
    }
}
/*void ft_solve_puzzle(int puzzle[4][4])
{
    int row;
    int col;    row = 0;
    col = 0;
}*/
int	ft_atoi(char *str)
{
	int	i;
	int	z;
	int	y;	
    i = 0;
	z = 1;
	y = 0;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
	{
		if ((str[i] >= 11 && str[i] <= 15) || str[i] == 32)
			i++;
		if (str[i] == '-')
		{
			z = z * -1;
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			y = y * 10 + (str[i] - 48);
			i++;
		}
		else if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			return (y);
		}
	}
	return (y);
}
int main(int argc, char *argv[])
{
	(void)argc;
	int	param;
    int puzzle[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
	param = ft_atoi(argv[1]);	
    printf("%d\n", param);
    puzzle [0][0] = ft_atoi(argv[2]);
    //param = ft_atoi(argv[2]);
	/*
	if (ft_solve_puzzle(puzzle))
    {
        write(1, "Solution :", 10);
        ft_print_puzzle(puzzle);
    }
    else
    {
        write(1, "error", 5);
    }*/
    ft_print_puzzle(puzzle);
    return (0);
}