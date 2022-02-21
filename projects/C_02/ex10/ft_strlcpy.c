/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 04:04:29 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/16 14:24:40 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	remaining;
	char			*src_pos;

	remaining = size;
	src_pos = src;
	if (remaining != 0)
	{
		while (--remaining > 0)
		{
			*dest = *src_pos;
			if (*dest == '\0')
				break ;
			src_pos++;
			dest++;
		}
	}
	if (remaining == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*src_pos != '\0')
			src_pos++;
	}
	return (src_pos - src);
}
