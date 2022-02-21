/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:24:37 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/15 04:01:33 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		should_capitalize;
	char	*ch;

	ch = str;
	should_capitalize = 1;
	while (*ch != '\0')
	{
		if (should_capitalize && *ch >= 'a' && *ch <= 'z')
			*ch = *ch - 'a' + 'A';
		if (!should_capitalize && *ch >= 'A' && *ch <= 'Z')
			*ch = *ch - 'A' + 'a';
		if ((*ch >= 'a' && *ch <= 'z') || (*ch >= 'A' && *ch <= 'Z')
			|| (*ch >= '0' && *ch <= '9'))
			should_capitalize = 0;
		else
			should_capitalize = 1;
		ch++;
	}
	return (str);
}
