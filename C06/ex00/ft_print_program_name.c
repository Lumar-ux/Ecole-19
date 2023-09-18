/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:33:50 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/18 19:22:45 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
void	ft_wr(char c)
{
	write (1, &c, 1);
}*/

int	main(int argc, char *argv[])
{	
	int	i;
	char *ag;

	i = 0;
	ag = &argv[0];
	if(argc > 0)
	{
	 while (ag[i] != '\0')
	{
		write (1, &ag[i], 1);
		i++;
		}
	write (1, "\n", 1);
	}
	return (0);
}
