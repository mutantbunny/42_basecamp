/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:18:13 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 23:25:09 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	for (int i = -1; i <= 10; i++)
		printf("Fatorial de %d = %d\n", i, ft_recursive_factorial(i));
}