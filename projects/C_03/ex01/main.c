/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:42:01 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 01:30:41 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define COL_SIZE 10

int ft_strncmp(char *dest, char *src, unsigned int n);

int main(void)
{
	char	*tests[] = {"", "aaaaa", "bbbbb", "aabbb"};
	int		n = 0;
	int		first = 0;
	int		second = 0;
	int		std_len;
	int		ft_len;
	
	printf(" String 1  |  String 2  | strncmp()  | ft_strncmp()\n");
	while (n < 7)
	{
		printf(">>> n = %d\n", n);
		first = 0;
		while (first < 4)
		{
			second = 0;
			while (second < 4)
			{
				std_len = strncmp(tests[first], tests[second], n);
				ft_len = ft_strncmp(tests[first], tests[second], n);
				printf("%*s | %*s | %*d | %*d", 
					COL_SIZE, tests[first],
					COL_SIZE, tests[second],
					COL_SIZE, std_len, 
					COL_SIZE, ft_len);
				if (std_len != ft_len)
					printf("\t<--- Diferença");
				printf("\n");
				second++;
			}
			first++;
		}
		n++;
	}
}
