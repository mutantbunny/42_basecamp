/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:50:00 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/06 18:26:08 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max_digit_value(int position, int n)
{
	return (10 - (n - position));
}

void	print_value(int digits[9], int n)
{
	int		position;
	char	digit;

	position = 0;
	while (position < n)
	{
		digit = '0' + (char)(digits[position]);
		write(1, &digit, 1);
		position++;
	}
}

int	last_number(int digits[9], int n)
{
	int	position;

	position = 0;
	while (position < n)
	{
		if (digits[position] < max_digit_value(position, n))
			return (0);
		position++;
	}
	return (1);
}

void	initialize_digits(int digits[9], int n)
{
	int	position;

	position = 0;
	while (position < n)
	{
		digits[position] = position;
		position++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[9];
	int	position;

	initialize_digits(digits, n);
	position = n - 1;
	while (!last_number(digits, n))
	{
		print_value(digits, n);
		write(1, ", ", 2);
		if (digits[position] < max_digit_value(position, n))
			digits[position]++;
		else
		{
			while (digits[position] >= max_digit_value(position, n))
				position--;
			digits[position]++;
			while (position < n - 1)
			{
				position++;
				digits[position] = digits[position - 1] + 1;
			}
		}
	}
	print_value(digits, n);
}
