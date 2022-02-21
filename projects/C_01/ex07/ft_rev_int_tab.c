/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 05:06:50 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/10 16:33:28 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	mid;
	int	tmp;

	i = 0;
	mid = size / 2;
	while (i < mid)
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + size - 1 - i);
		*(tab + size - 1 - i) = tmp;
		i++;
	}
}

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int i;
	
	i = 0;
	while (i < 5)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(a, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}