/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:16:06 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/06 19:54:08 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP_LEFT 'A'
#define HORIZONTAL 'B'
#define TOP_RIGHT 'C'
#define VERTICAL 'B'
#define BOTTOM_LEFT 'C'
#define BOTTOM_RIGHT 'A'

void	ft_putchar(char c);

void	draw_line(int length, char start, char mid, char end)
{
	int	number_chars;

	ft_putchar(start);
	number_chars = length - 2;
	while (number_chars > 0)
	{
		ft_putchar(mid);
		number_chars--;
	}
	if (length > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	number_lines;

	if (x == 0 || y == 0)
	{
		return ;
	}
	draw_line(x, TOP_LEFT, HORIZONTAL, TOP_RIGHT);
	number_lines = y - 2;
	while (number_lines > 0)
	{
		draw_line(x, VERTICAL, ' ', VERTICAL);
		number_lines--;
	}
	if (y > 1)
	{
		draw_line(x, BOTTOM_LEFT, HORIZONTAL, BOTTOM_RIGHT);
	}
}
