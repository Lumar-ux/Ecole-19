/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <lmaroy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:25:12 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 22:08:40 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	digit;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			res = res * 10 + digit;
			i++;
		}
		else if (str[i] == ' ')
		{
			i++;
		}
	}
	return (res);
}
