/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/08 18:22:30 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	a[] = "ABCXY~";
	char	b[] = "sEb a";
	char	c[] = "35#";
	char	d[] = "C35\n";
	char	e[] = "";
	
	printf("Test array a (should return 1): Return = %d\n", ft_str_is_printable(a));
	printf("Test array b (should return 1): Return = %d\n", ft_str_is_printable(b));
	printf("Test array c (should return 1): Return = %d\n", ft_str_is_printable(c));
	printf("Test array d (should return 0): Return = %d\n", ft_str_is_printable(d));
	printf("Test array d (should return 1): Return = %d\n", ft_str_is_printable(e));
}
