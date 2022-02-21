/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:18:13 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 01:46:13 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	for (int base = -5; base <= 5; base++)
	{
		for (int power = -1; power <= 3; power++)
			printf("%d to the power of %d = %d\n", base, power, ft_iterative_power(base, power));
		printf("\n");
	}
}
