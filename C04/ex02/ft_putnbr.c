/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <lmaroy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:27:22 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/24 18:32:26 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_wr(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int number;

    if (nb == -2 147 483 648)
    {
        write(1, "-2", 2);
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_wr('-');
        number = (unsigned int)(-nb);
    }
    else
    {
        number = nb;
    }
    if (number > 9)
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
//  int nb = -5;

//ft_putnbr(21478);
ft_putnbr(-2147483648);
    return (0);
}
