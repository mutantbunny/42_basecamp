/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:18:13 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 02:15:05 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);


int	main(void)
{
	for (int i = -1; i <= 50; i++)
	{
		printf("Root of %d = %d\n", i, ft_sqrt(i));
	}
}