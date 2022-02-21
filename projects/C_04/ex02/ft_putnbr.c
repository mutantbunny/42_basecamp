/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:36:29 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 04:39:11 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(int digit)
{
	char	c;

	c = '0' + (char)digit;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	divider;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	divider = 1e9;
	if (nb < 0)
	{
		write(1, "-", 1);
		divider = -divider;
	}
	while (divider != 0 && nb / divider == 0)
	{
		nb %= divider;
		divider /= 10;
	}
	while (divider != 0)
	{
		ft_putdigit(nb / divider);
		nb %= divider;
		divider /= 10;
	}
}
