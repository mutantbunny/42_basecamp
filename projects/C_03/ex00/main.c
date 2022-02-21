/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:42:01 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/11 04:54:37 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char	*empty = "";
	char	*aa = "aa";
	char	*bb = "bb";
	char	*aab = "aab";

	printf("Strings\t\tstrcmp()\tft_strcmp()\n");
	printf("'aa', 'aa'\t\t%d\t\t%d\n", strcmp(aa, aa), ft_strcmp(aa, aa));
	printf("'aa', 'bb'\t\t%d\t\t%d\n", strcmp(aa, bb), ft_strcmp(aa, bb));
	printf("'aa', 'aab'\t\t%d\t\t%d\n", strcmp(aa, aab), ft_strcmp(aa, aab));
	printf("'', ''\t\t\t%d\t\t%d\n", strcmp(empty, empty), ft_strcmp(empty, empty));
	printf("'', 'aa'\t\t%d\t\t%d\n", strcmp(empty, aa), ft_strcmp(empty, aa));
	printf("'bb', 'aa'\t\t%d\t\t%d\n", strcmp(bb, aa), ft_strcmp(bb, aa));
	printf("'bb', 'aab'\t\t%d\t\t%d\n", strcmp(bb, aab), ft_strcmp(bb, aab));
}
