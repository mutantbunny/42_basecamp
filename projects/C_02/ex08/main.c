/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 03:38:19 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	a[] = "ABCXY";
	char	b[] = "sEb a";
	char	c[] = "35#";
	char	d[] = "C35aSSSa@fds\n";
	char	e[] = "";
	
	printf("Test array a: Original: \"%s\"\n", a);
	printf("Test array b: Original: \"%s\"\n", b);
	printf("Test array c: Original: \"%s\"\n", c);
	printf("Test array d: Original: \"%s\"\n", d);
	printf("Test array e: Original: \"%s\"\n", e);
	printf("Test array a: Return = \"%s\"\n", ft_strlowcase(a));
	printf("Test array b: Return = \"%s\"\n", ft_strlowcase(b));
	printf("Test array c: Return = \"%s\"\n", ft_strlowcase(c));
	printf("Test array d: Return = \"%s\"\n", ft_strlowcase(d));
	printf("Test array e: Return = \"%s\"\n", ft_strlowcase(e));
}
