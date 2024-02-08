/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:24:40 by agorski           #+#    #+#             */
/*   Updated: 2024/02/06 21:43:45 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(int a, int b, int c)
{
	char	temp;

	temp = a + '0';
	write(1, &temp, 1);
	temp = b + '0';
	write(1, &temp, 1);
	temp = c + '0';
	write(1, &temp, 1);
	if (a != 7 || b != 8 || c != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	digits1;
	int	digits2;
	int	digits3;

	digits1 = 0;
	while (digits1 <= 7)
	{
		digits2 = digits1 + 1;
		while (digits2 <= 8)
		{
			digits3 = digits2 + 1;
			while (digits3 <= 9)
			{
				ft_print_digits(digits1, digits2, digits3);
				digits3++;
			}
			digits2++;
		}
		digits1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
