/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:29:03 by tiida             #+#    #+#             */
/*   Updated: 2025/11/27 23:21:39 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb + '0');
}

/*
{
	char	m;

	if (nb >= 0 && nb <= 9)
		write(1, &nb, 1);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		m = nb % 10 + '0';
		write(1, &m, 1);
	}
	if (nb == -2147483648)
	{
		nb = -1 * nb;
		ft_putnbr(nb);
	}
	if (nb < 0)
	{
		nb = -1 * nb;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
}

		
	int	i;

	i = 0;
	if (nb == -2147483648)
	
	if (0 <= nb && nb <= 2147483647)
	{
		while (nb[i] = '\0')
			write(1, &nb[i], 1);
	}
	write(1, &nb[i], 1);
*/
