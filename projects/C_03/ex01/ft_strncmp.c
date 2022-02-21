/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:16:19 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/17 00:29:58 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	n--;
	while ((*s1 == *s2) && (n > 0))
	{
		if (*s1 == '\0')
			return ((*s1) - (*s2));
		s1++;
		s2++;
		n--;
	}
	return ((*s1) - (*s2));
}