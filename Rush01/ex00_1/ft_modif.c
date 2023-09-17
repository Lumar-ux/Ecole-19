/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <lmaroy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:59:58 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 22:09:42 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

void	ft_modif(int puzzle[4][4], char *argv[])
{
	int		i;
	int		y;
	char	*str;
	char	param;
	char	str2;

	y = 0;
	i = 0;
	str = argv[1];
	param = str[i];
	str2 = ft_atoi(&param);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			y++;
		}
		if (str[i] == '4' && (i - y) < 4)
		{
			puzzle[0][i - y] = 1;
			puzzle[1][i - y] = 2;
			puzzle[2][i - y] = 3;
			puzzle[3][i - y] = 4;
		}
		if (str[i] == '4' && ((i - y) >= 4 && (i - y) < 8))
		{
			puzzle[i - y - 4][3] = 1;
			puzzle[i - y - 4][2] = 2;
			puzzle[i - y - 4][1] = 3;
			puzzle[i - y - 4][0] = 4;
		}
		if (str[i] == '4' && ((i - y) >= 8 && (i - y) < 12))
		{
			puzzle[i - y - 8][0] = 1;
			puzzle[i - y - 8][1] = 2;
			puzzle[i - y - 8][2] = 3;
			puzzle[i - y - 8][3] = 4;
		}
		if (str[i] == '4' && ((i - y) >= 12 && (i - y) < 16))
		{
			puzzle[3][i - y - 12] = 1;
			puzzle[2][i - y - 12] = 2;
			puzzle[1][i - y - 12] = 3;
			puzzle[0][i - y - 12] = 4;
		}
		i++;
	}
}
