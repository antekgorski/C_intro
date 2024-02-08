/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:00:16 by agorski           #+#    #+#             */
/*   Updated: 2024/02/06 11:27:05 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_to_char(int number)
{
	int	dec;
	int	dig;

	if (number < 10)
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
	if (number >= 10 && number <= 99)
	{
		dec = number / 10;
		dig = number % 10;
		ft_putchar(dec + '0');
		ft_putchar(dig + '0');
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 00;
	while (number1 <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_int_to_char(number1);
			ft_putchar(' ');
			ft_int_to_char(number2);
			if (number2 <= 99 && number1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			number2++;
		}
		number1++;
	}
}
// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
//			else if (number1 == 98 && number2 == 99)
//				ft_putchar('\n');