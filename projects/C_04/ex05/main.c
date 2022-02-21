/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:32:17 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 17:04:33 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*tests[] = {"0", "--++0", "  7fffffff", "---80000000", "  ---+--+1234abhgd"};
	char	*base = "0123456789abcdef";
	
	for (int i = 0; i < 5; i++)
		printf("String: %s, Return: %d\n", tests[i], ft_atoi_base(tests[i], base));
}
