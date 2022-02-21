/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:36:29 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 03:44:25 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define MIN_INT -2147483648
#define IS_NEGATIVE 1
#define IS_ZERO -1
#define IS_POSITIVE 0

void	ft_putdigit(int digit, char *base, int signal)
{
	if (signal == IS_POSITIVE)
		digit = -digit;
	write(1, &base[digit], 1);
}

// Returns base length if successful, 0 otherwise
int	ft_process_base(char *base)
{
	char	map[127];
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < 127)
	{
		map[i] = 0;
		i++;
	}
	while (*base != '\0')
	{
		if (*base < 32 || *base > 126 || *base == '-' || *base == '+')
			return (0);
		if (map [(int)(*base)] > 0)
			return (0);
		map[(int)(*base)]++;
		base++;
		len++;
	}
	return (len);
}

// Return values representing the signal, 
// defined as IS_NEGATIVE, IS_ZERO or IS_POSITIVE
int	handle_signal(int nbr, char *base)
{
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (IS_ZERO);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (IS_NEGATIVE);
	}
	return (IS_POSITIVE);
}

int	ft_get_max_divider(int base_length)
{
	int	divider;

	if (base_length == 2)
		return (MIN_INT);
	divider = 1;
	while ((int)(MIN_INT) / divider <= -base_length)
		divider *= base_length;
	return (-divider);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	divider;
	int	base_length;
	int	signal;

	base_length = ft_process_base(base);
	if (base_length < 2)
		return ;
	signal = handle_signal(nbr, base);
	if (signal == IS_ZERO)
		return ;
	divider = ft_get_max_divider(base_length);
	while (divider != 0 && nbr / divider == 0)
	{
		nbr %= divider;
		divider /= base_length;
	}
	while (divider != 0)
	{
		ft_putdigit(nbr / divider, base, signal);
		nbr %= divider;
		divider /= base_length;
	}
}
