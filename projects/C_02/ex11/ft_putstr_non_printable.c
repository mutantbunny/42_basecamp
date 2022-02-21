/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 04:13:19 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 04:38:08 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_special_char(char ch)
{
	static char	hex_digits[] = {'0', '1', '2', '3', '4', '5',
		'6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	write(1, "\\", 1);
	write(1, &hex_digits[(int)(unsigned char)ch / 16], 1);
	write(1, &hex_digits[(int)(unsigned char)ch % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			print_special_char(*str);
		else
			write(1, str, 1);
		str++;
	}
}
