/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:48:23 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/09 02:44:56 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	int_to_char(int i)
{
	return ('0' + (char)(i));
}

void	write_numbers(int first, int second)
{
	char		digit;

	digit = int_to_char(first / 10);
	write(1, &digit, 1);
	digit = int_to_char(first % 10);
	write(1, &digit, 1);
	write(1, " ", 1);
	digit = int_to_char(second / 10);
	write(1, &digit, 1);
	digit = int_to_char(second % 10);
	write(1, &digit, 1);
	if (!(first == 98 && second == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_numbers(i, j);
			j++;
		}
		i++;
	}
}
