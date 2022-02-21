/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:36:00 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 02:17:32 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char base[] = "0123456789ABCDEF";
	
	for (int base_length = 16; base_length >= 0; base_length--)
	{
		base[base_length] = '\0';
		printf("Base: '%s'\n", base);
		ft_putnbr_base(-2147483648, base);
		printf("\n=== Spacer ===\n");
		ft_putnbr_base(-1, base);
		printf("\n=== Spacer ===\n");
		ft_putnbr_base(0, base);
		printf("\n=== Spacer ===\n");
		ft_putnbr_base(1, base);
		printf("\n=== Spacer ===\n");
		ft_putnbr_base(2147483647, base);
		printf("\n=== Spacer ===\n\n");
	}
}