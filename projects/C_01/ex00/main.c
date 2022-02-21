/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:09:29 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 00:46:30 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int a;

	a = 1;
	printf("Antes de chamar ft_ft: %d, endereço de a: %p\n", a, &a);
	ft_ft(&a);
	printf("Depois de chamar ft_ft: %d\n", a);
	return (0);
}
