/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:09:10 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/12 09:26:51 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		write (1, "P", 1);
	}
	if (n == 0)
	{
		write (1, "P", 1);
	}
	if (n < 0)
	{
		write (1, "N", 1);
	}
}
