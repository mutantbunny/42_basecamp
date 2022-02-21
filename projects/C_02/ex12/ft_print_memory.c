/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:31:40 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 04:38:57 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address(void *addr)
{
	char				buffer[16];
	static char			hex_digits[] = {'0', '1', '2', '3', '4',
		'5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned long int	masked;
	int					position;

	position = 0;
	while (position < 16)
	{
		masked = (15UL << (60 - 4 * position)
				& (unsigned long int) addr) >> (60 - 4 * position);
		buffer[position] = hex_digits[masked];
		position++;
	}
	write(1, &buffer, 16);
}

void	print_hex_byte(char ch)
{
	static char	hex_digits[] = {'0', '1', '2', '3', '4',
		'5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	write(1, &hex_digits[ch >> 4], 1);
	write(1, &hex_digits[ch & 15], 1);
}

void	print_hex(void *addr, unsigned int size)
{
	unsigned int	offset;

	offset = 0;
	while (offset < size)
	{
		print_hex_byte(*((char *)addr + offset));
		if (offset % 2)
			write(1, " ", 1);
		offset++;
	}
	while (offset < 16)
	{
		write(1, "  ", 2);
		if (offset % 2)
			write(1, " ", 1);
		offset++;
	}
}

void	print_contents(void *addr, unsigned int size)
{
	unsigned int	offset;
	char			ch;

	offset = 0;
	while (offset < size)
	{
		ch = *((char *)addr + offset);
		if (ch < ' ' || ch > '~')
			write(1, ".", 1);
		else
			write(1, &ch, 1);
		offset++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void			*start;
	unsigned int	offset;
	unsigned int	line_length;

	offset = 0;
	start = addr;
	while (offset < size)
	{
		if (size - offset > 16)
			line_length = 16;
		else
			line_length = size - offset;
		print_address(addr + offset);
		write(1, ": ", 2);
		print_hex(addr + offset, line_length);
		print_contents(addr + offset, line_length);
		write(1, "\n", 1);
		offset += 16;
	}
	return (start);
}
