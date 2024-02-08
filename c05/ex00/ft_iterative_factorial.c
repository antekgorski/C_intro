/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:10:36 by agorski           #+#    #+#             */
/*   Updated: 2024/02/04 23:09:57 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb > 0)
	{
		factorial = 1;
		i = 1;
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
		return (factorial);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int number = 5; // Przykładowa liczba
// 	int result = ft_iterative_factorial(number);
// 	printf("Silnia liczby %d wynosi: %d\n", number, result);
// 	return (0);
// }