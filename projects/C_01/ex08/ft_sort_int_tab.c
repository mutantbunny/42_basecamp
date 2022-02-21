/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 05:27:20 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/10 17:13:09 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sift_down(int *tab, int root, int end)
{
	int	temp;
	int	child;
	int	swap;

	while (2 * root + 1 <= end)
	{
		child = 2 * root + 1;
		swap = root;
		if (tab[swap] < tab[child])
			swap = child;
		if (child + 1 <= end && tab[swap] < tab[child + 1])
			swap = child + 1;
		if (swap == root)
			return ;
		else
		{
			temp = tab[root];
			tab[root] = tab[swap];
			tab[swap] = temp;
			root = swap;
		}
	}
}

void	heapify(int *tab, int size)
{
	int	start;

	start = (size - 2) / 2;
	while (start >= 0)
	{
		sift_down(tab, start, size - 2);
		start--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	end;
	int	temp;

	heapify(tab, size);
	end = size - 1;
	while (end > 0)
	{
		temp = tab[end];
		tab[end] = tab[0];
		tab[0] = temp;
		end--;
		sift_down(tab, 0, end);
	}
}

int main(void)
{
	int a[] = {7, 2, 4, 1};
	int i;
	
	i = 0;
	while (i < 4)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(a, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}