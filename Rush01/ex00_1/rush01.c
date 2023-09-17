/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <lmaroy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:27:53 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 22:09:06 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
void	ft_modif(int puzzle[4][4], char *argv);

void	ft_print_puzzle(int puzzle[4][4])
{
	int		i;
	int		j;
	char	numb_str[2];

	i = 0;
	j = 0;
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

int	main(int argc, char *argv[])
{
	int	puzzle[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	(void)argv;
	(void)argc;
	ft_modif(puzzle, *argv);
	ft_print_puzzle(puzzle);
	return (0);
}
