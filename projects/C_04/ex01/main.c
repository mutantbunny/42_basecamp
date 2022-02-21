/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:28:29 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/18 13:36:34 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*empty = "";
	char	*str = "abcdefghijklmnopqrstuvwxyz";
	char	*newline = "\n";

	ft_putstr(empty);
	ft_putstr(newline);
	ft_putstr(str);
	ft_putstr(newline);
}
