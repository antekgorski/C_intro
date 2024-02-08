/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:40:21 by agorski           #+#    #+#             */
/*   Updated: 2024/02/04 23:10:00 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb > 0)
	{
		factorial = nb * (ft_recursive_factorial(nb - 1));
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
// 	int result = ft_recursive_factorial(number);
// 	printf("Silnia liczby %d wynosi: %d\n", number, result);
// 	return (0);
// }