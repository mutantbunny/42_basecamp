/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:17:27 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 04:36:40 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char ch)
{
	return (ch == ' ' || (ch >= 9 && ch <= 13));
}

int	get_digit(char ch, char *base)
{
	int	index;

	if (ch < 32 || ch > 126 || ch == '-' || ch == '+')
		return (-1);
	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == ch)
			return (index);
		index++;
	}
	return (-1);
}

int	process_digits(char *str, char *base, int base_length)
{
	int	result;
	int	digit;

	result = 0;
	digit = get_digit(*str, base);
	while (digit >= 0)
	{
		result = base_length * result - digit;
		str++;
		digit = get_digit(*str, base);
	}
	return (result);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	result;
	int	base_length;

	base_length = ft_process_base(base);
	if (base_length < 2)
		return (0);
	signal = -1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = (-signal);
		str++;
	}
	result = process_digits(str, base, base_length);
	return (signal * result);
}
