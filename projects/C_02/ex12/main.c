/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:18:03 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/11 02:36:50 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	a[320] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla feugiat tincidunt erat eget vulputate. Sed non lacus nec elit tincidunt vulputate. Maecenas faucibus iaculis augue. Maecenas nec hendrerit nisi. Morbi gravida semper aliquam. Fusce a justo in nibh pretium facilisis quis ut mi. Phasellus malesuada nisi eros";

	ft_print_memory(&a, 310);
}
