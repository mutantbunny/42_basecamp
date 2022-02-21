/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:34:35 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 03:00:41 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	multiplier;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	multiplier = 3;
	while (multiplier * multiplier <= nb)
	{
		if (nb % multiplier == 0)
			return (0);
		multiplier++;
	}
	return (1);
}
