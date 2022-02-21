/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/16 18:42:38 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/cdefs.h>
#include <sys/types.h>

size_t strlcpy(char * __restrict dst, const char * __restrict src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}

	return(s - src - 1);	/* count does not include NUL */
}

// +++++ Fim do código de http://web.mit.edu/freebsd/head/sys/libkern/strlcpy.c

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			a[] = "abcdefghijklmnopqrstuvwxyz";
	char			b[] = "0123456789";
	char			c[] = "abcdefghijklmnopqrstuvwxyz";
	char			d[] = "0123456789";
	char			e[] = "";
	unsigned int	copied;
	int				i = 0;
	
	while (i < 12)
	{
		printf("n = %d\n", i);
		
		printf("Test original strlcpy: Original destination: \"%s\", source: \"%s\".\n", a, b);
		copied = strlcpy(a, b, i);
		printf("Test original strlcpy: \"%s\". Source size: %d characters.\n", a, copied);

		printf("Test clone ft_strlcpy: Original destination: \"%s\", source: \"%s\".\n", c, d);
		copied = ft_strlcpy(c, d, i);
		printf("Test clone ft_strlcpy: \"%s\". Source size: %d characters.\n", c, copied);

		printf("Test original strlcpy: Original destination: \"%s\", source: \"%s\".\n", a, e);
		copied = strlcpy(a, e, i);
		printf("Test original strlcpy: \"%s\". Source size: %d characters.\n", a, copied);

		printf("Test clone ft_strlcpy: Original destination: \"%s\", source: \"%s\".\n", c, e);
		copied = ft_strlcpy(c, e, i);
		printf("Test clone ft_strlcpy: \"%s\". Source size: %d characters.\n", c, copied);

		i += 3;
	}	
}
