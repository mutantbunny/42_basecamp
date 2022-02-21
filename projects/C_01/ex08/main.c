/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:04:56 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/09 16:06:59 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sift_down(int *tab, int root, int end);

int	main(void)
{
	int	tab[7];
	int	i;

	i = 0;
	printf("Before: ");
	while (i < 7)
	{
		tab[i] = 7 - i;
		printf("%d ", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, 7);
	i = 0;
	printf("\nAfter: ");
	while (i < 7)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
