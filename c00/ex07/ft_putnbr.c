/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:44:27 by agorski           #+#    #+#             */
/*   Updated: 2024/02/06 10:51:22 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_function(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write_function('-');
		write_function('2');
		nb = 147483648;
	}
	if (0 > nb)
	{
		write_function('-');
		nb *= (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		write_function(nb + '0');
}

// int	main(void)
// {
// 	ft_putnbr(2147483647);
// }