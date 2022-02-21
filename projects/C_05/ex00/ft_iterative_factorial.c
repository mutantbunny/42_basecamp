/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:50:32 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 23:21:40 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	factorial = nb;
	while (nb > 1)
	{
		nb--;
		factorial *= nb;
	}
	return (factorial);
}
