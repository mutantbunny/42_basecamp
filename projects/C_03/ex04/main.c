/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:42:01 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 20:25:49 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
int main(void)
{
	char	ft_test1[1] = {""};
	char	ft_test2[10] = {"acaaacdcd"};
	char	ft_test3[2] = {"a"};
	char	ft_test4[4] = {"acd"};
	char	ft_test5[3] = {"gh"};
	char*	dest;

	printf("Stdlib: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test1, ft_test1);
	dest = strstr(ft_test2, ft_test1);
	printf("Stdlib Return: '%p'\n", dest);
	printf("Test: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test1, ft_test1);
	dest = ft_strstr(ft_test2, ft_test1);
	printf("Test Return: '%p'\n\n", dest);
	
	printf("Stdlib: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test3, ft_test3);
	dest = strstr(ft_test2, ft_test3);
	printf("Stdlib Return: '%p'\n", dest);
	printf("Test: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test3, ft_test3);
	dest = ft_strstr(ft_test2, ft_test3);
	printf("Test Return: '%p'\n\n", dest);

	printf("Stdlib: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test4, ft_test4);
	dest = strstr(ft_test2, ft_test4);
	printf("Stdlib Return: '%p'\n", dest);
	printf("Test: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test4, ft_test4);
	dest = ft_strstr(ft_test2, ft_test4);
	printf("Test Return: '%p'\n\n", dest);

	printf("Stdlib: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test5, ft_test5);
	dest = strstr(ft_test2, ft_test5);
	printf("Stdlib Return: '%p'\n", dest);
	printf("Test: Haystack: %p: '%s', Needle: %p: '%s'\n", ft_test2, ft_test2, ft_test5, ft_test5);
	dest = ft_strstr(ft_test2, ft_test5);
	printf("Test Return: '%p'\n\n", dest);
}

