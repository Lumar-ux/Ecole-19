/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:08:38 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/15 11:45:03 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_wr(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(char a, char b)
{
	ft_wr((a / 10) + 48);
	ft_wr((a % 10) + 48);
	write(1, " ", 1);
	ft_wr((b / 10) + 48);
	ft_wr((b % 10) + 48);
}

void	ft_print_comb2(void)
	{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_nbr(a, b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
