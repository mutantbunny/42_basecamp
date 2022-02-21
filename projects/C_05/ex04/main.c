/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:18:13 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 02:00:35 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	for (int i = -1; i <= 40; i++)
	{
		// printf("Fibonacci of index %d = %d\n", i, ft_fibonacci(i));
		printf("%d ", ft_fibonacci(i));
	}
	printf("\n");
}