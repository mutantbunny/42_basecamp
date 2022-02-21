/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 03:35:11 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	a[] = "abcxy";
	char	b[] = "sEb a";
	char	c[] = "35#~";
	char	d[] = "C35aSS@aafds\n";
	char	e[] = "";

	printf("Test array a: Original: \"%s\"\n", a);
	printf("Test array b: Original: \"%s\"\n", b);
	printf("Test array c: Original: \"%s\"\n", c);
	printf("Test array d: Original: \"%s\"\n", d);
	printf("Test array e: Original: \"%s\"\n", e);
	printf("Test array a: Return = \"%s\"\n", ft_strupcase(a));
	printf("Test array b: Return = \"%s\"\n", ft_strupcase(b));
	printf("Test array c: Return = \"%s\"\n", ft_strupcase(c));
	printf("Test array d: Return = \"%s\"\n", ft_strupcase(d));
	printf("Test array e: Return = \"%s\"\n", ft_strupcase(e));
}
