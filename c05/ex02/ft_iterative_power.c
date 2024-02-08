/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:06:16 by agorski           #+#    #+#             */
/*   Updated: 2024/02/05 00:20:09 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = nb;
		while ((power - 1) != 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

// int	main(void)
// {
// 	int base = 0;
// 	int exponent = 9;
// 	int result = ft_iterative_power(base, exponent);
// 	printf("Result: %d^%d = %d\n", base, exponent, result);
// 	return (0);
// }
