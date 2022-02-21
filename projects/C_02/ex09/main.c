/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 04:00:30 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	a[] = "aaa bbb@ccc";
	char	b[] = "AAA-bBb~CcC";
	char	c[] = "aaa35aaa#aaa";
	char	d[] = "c3 5aAs@sb fDs\n";
	char	e[] = "";
	
	printf("Test array a: Original: \"%s\"\n", a);
	printf("Test array b: Original: \"%s\"\n", b);
	printf("Test array c: Original: \"%s\"\n", c);
	printf("Test array d: Original: \"%s\"\n", d);
	printf("Test array e: Original: \"%s\"\n", e);
	printf("Test array a: Return = \"%s\"\n", ft_strcapitalize(a));
	printf("Test array b: Return = \"%s\"\n", ft_strcapitalize(b));
	printf("Test array c: Return = \"%s\"\n", ft_strcapitalize(c));
	printf("Test array d: Return = \"%s\"\n", ft_strcapitalize(d));
	printf("Test array e: Return = \"%s\"\n", ft_strcapitalize(e));
}
