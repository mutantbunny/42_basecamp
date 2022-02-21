/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:09:29 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 00:56:35 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int a = 1;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;

	printf("Antes de chamar ft_ft: %d, endereço de a: %p\n", a, &a);
	ft_ultimate_ft(&i);
	printf("Depois de chamar ft_ft: %d\n", a);
	return (0);
}
