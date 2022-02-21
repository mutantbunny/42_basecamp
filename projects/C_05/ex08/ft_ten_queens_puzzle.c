/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 03:08:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 04:33:47 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(int col_placements[10])
{
	int		col;
	char	digit;

	col = 0;
	while (col < 10)
	{
		digit = '0' + (char)(col_placements[col]);
		write(1, &digit, 1);
		col++;
	}
	write(1, "\n", 1);
}

int	is_valid(int col_placements[10], int row)
{
	int	i;
	int	diff;

	i = 0;
	while (i < row)
	{
		diff = col_placements[i] - col_placements[row];
		if (diff < 0)
			diff = (-diff);
		if (diff == 0 || diff == row - i)
			return (0);
		i++;
	}
	return (1);
}

void	solve_ten_queens(int col_placements[10], int row, int *results)
{
	int	col;

	if (row == 10)
	{
		print_result(col_placements);
		*results = (*results) + 1;
	}
	else
	{
		col = 0;
		while (col < 10)
		{
			col_placements[row] = col;
			if (is_valid(col_placements, row))
				solve_ten_queens(col_placements, row + 1, results);
			col_placements[row] = -1;
			col++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	col_placements[10];
	int	col;
	int	num_results;

	col = 0;
	num_results = 0;
	while (col < 10)
	{
		col_placements[col] = -1;
		col++;
	}
	solve_ten_queens(col_placements, 0, &num_results);
	return (num_results);
}
