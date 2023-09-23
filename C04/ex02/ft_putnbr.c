/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:24:06 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/18 19:04:20 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void ft_wr(char c)
{
	 write(1, &c, 1);
}
void ft_putnbr(long int nb)
{
	int number;
	if(nb < 0)
	{
		ft_wr('-');
		number = (unsigned int)(-nb);
	}
	else
	{
	number = nb;
	}
	if(number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_wr(number + 48);
	}
}
int main(void)
{
//	int nbn;
	int nb = -922;
	
   //	ft_putnbr(nbn);
	ft_putnbr(nb);
	return (0);
}
