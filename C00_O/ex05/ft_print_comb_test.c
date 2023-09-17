/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:41:28 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/12 10:00:26 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_d_nb(char a, char b, char c)
	{
	a = a + 48;
	b = b + 48;
	c = c + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
	{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_d_nb (a, b, c);
				if (!(a == 7 && b == 8 && c == 9))
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
