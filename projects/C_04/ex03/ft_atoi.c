/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:17:27 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/17 15:53:35 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char ch)
{
	return (ch == ' ' || (ch >= 9 && ch <= 13));
}

int	ft_atoi(char *str)
{
	int	is_negative;
	int	result;

	result = 0;
	is_negative = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = (!is_negative);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result - (int)(*str - '0');
		str++;
	}
	if (!is_negative)
		return (-result);
	return (result);
}
