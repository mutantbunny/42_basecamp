/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 04:36:42 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_putstr_non_printable(char *str);

int	main(void)
{
	static char	test[6] = {'\n', 31, ' ', '~', 255, '\0'};
	char		*example = "Oi\nvoce esta bem?";

	ft_putstr_non_printable(test);
	printf("\n");
	ft_putstr_non_printable(example);
	printf("\n");
}
