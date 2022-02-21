/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:20:49 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 00:35:02 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(int digit)
{
	char c;

	c = '0' + (char)digit;
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	int	position;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		position = -1e9;
	}
	else
		position = 1e9;
	while (position != 0 && nb / position == 0)
	{
		nb %= position;  // nb = nb % position;
		position /= 10;
	}
	while (position != 0)
	{
		ft_putdigit(nb / position);
		nb %= position;
		position /= 10;
	}
}
