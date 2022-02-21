/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:03:07 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/19 02:12:48 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 1)
		return (0);
	root = 1;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}
