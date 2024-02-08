/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:11:00 by agorski           #+#    #+#             */
/*   Updated: 2024/02/05 00:21:45 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
		result = nb * ft_recursive_power(nb, --power);
		return (result);
	}
}

//int	main(void)
// {
// 	int base = 0;
// 	int exponent = 9;
// 	int result = ft_recursive_power(base, exponent);
// 	printf("Result: %d^%d = %d\n", base, exponent, result);
// 	return (0);
// }
