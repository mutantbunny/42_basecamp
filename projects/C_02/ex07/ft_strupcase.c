/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:12:40 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 03:36:14 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ch;

	ch = str;
	while (*ch != '\0')
	{
		if (*ch >= 'a' && *ch <= 'z')
			*ch = *ch - 'a' + 'A';
		ch++;
	}
	return (str);
}