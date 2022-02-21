/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 05:11:16 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 19:48:06 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_whole_sequence(char *str, char *to_find)
{
	while (1)
	{
		if (*to_find == '\0')
			return (1);
		if (*str == '\0' || *str != *to_find)
			return (0);
		str++;
		to_find++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find && find_whole_sequence(str + 1, to_find + 1))
			return (str);
		str++;
	}
	return (0);
}

oal, esttudo bem
tudo'\0'