/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <lmaroy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:52:18 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 22:10:16 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_top_row(int puzzle[4][4], int col)
{
	puzzle[0][col] = 1;
	puzzle[1][col] = 2;
	puzzle[2][col] = 3;
	puzzle[3][col] = 4;
}

void	set_bottom_row(int puzzle[4][4], int col)
{
	puzzle[3][col] = 1;
	puzzle[2][col] = 2;
	puzzle[1][col] = 3;
	puzzle[0][col] = 4;
}

void	process_characters(int puzzle[4][4], char *str, int *i, int *y)
{
	int		col;

	col = *i - *y;
	while (str[*i] != '\0')
	{
		if (str[*i] == '4')
		{
			if (col < 4)
				set_top_row(puzzle, col);
			else if (col < 8)
				set_bottom_row(puzzle, col - 4);
			else if (col < 12)
				set_bottom_row(puzzle, col - 8);
			else if (col < 16)
				set_top_row(puzzle, col - 12);
		}
		if (str[*i] == ' ')
		{
			(*i)++;
			(*y)++;
		}
		(*i)++;
	}
}

void	ft_modif(int puzzle[4][4], char *argv[])
{
	int		i;
	int		y;
	char	*str; 

	str = argv[1];
	i = 0;
	y = 0;
	process_characters(puzzle, str, &i, &y);
}
