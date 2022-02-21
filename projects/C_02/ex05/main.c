/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/08 18:18:04 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	a[] = "ABCXY";
	char	b[] = "sEb";
	char	c[] = "35#";
	char	d[] = "C35";
	char	e[] = "";
	
	printf("Test array a (should return 1): Return = %d\n", ft_str_is_uppercase(a));
	printf("Test array b (should return 0): Return = %d\n", ft_str_is_uppercase(b));
	printf("Test array c (should return 0): Return = %d\n", ft_str_is_uppercase(c));
	printf("Test array d (should return 0): Return = %d\n", ft_str_is_uppercase(d));
	printf("Test array d (should return 1): Return = %d\n", ft_str_is_uppercase(e));
}
