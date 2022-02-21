/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:42:01 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/14 04:08:21 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	ft_test1[1] = {""};
	char	ft_test2[5] = {"abcd"};
	char	ft_test3[5] = {"fghi"};
	char	ft_test4[10] = {"jklm"};
	char	std_test1[1] = {""};
	char	std_test2[5] = {"abcd"};
	char	std_test3[5] = {"fghi"};
	char	std_test4[10] = {"jklm"};
	char*	dest;

	printf("Stdlib Before: Destination: '%s', Source: '%s'\n", std_test2, std_test1);
	dest = strcat(std_test2, std_test1);
	printf("Stdlib After: Destination: '%s', Source: '%s', Return: '%s'\n", std_test2, std_test1, dest);

	printf("Exercise Before: Destination: '%s', Source: '%s'\n", ft_test2, ft_test1);
	dest = ft_strcat(ft_test2, ft_test1);
	printf("Exercise After: Destination: '%s', Source: '%s', Return: '%s'\n", ft_test2, ft_test1, dest);

	printf("Stdlib Before: Destination: '%s', Source: '%s'\n", std_test4, std_test3);
	dest = strcat(std_test4, std_test3);
	printf("Stdlib After: Destination: '%s', Source: '%s', Return: '%s'\n", std_test4, std_test3, dest);

	printf("Exercise Before: Destination: '%s', Source: '%s'\n", ft_test4, ft_test3);
	dest = ft_strcat(ft_test4, ft_test3);
	printf("Exercise After: Destination: '%s', Source: '%s', Return: '%s'\n", ft_test4, ft_test3, dest);
}
