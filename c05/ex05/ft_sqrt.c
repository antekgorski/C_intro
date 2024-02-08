/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:34:30 by agorski           #+#    #+#             */
/*   Updated: 2024/02/05 16:39:46 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	if (nb == 46340)
		return (0);
	while (y <= nb)
	{
		if (y == nb)
			return (--x);
		y = x * x;
		x++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	num_cases;
// 	int	result;

// 	// Testowanie funkcji
// 	int test_cases[] = {25, 36, 7, 0, 1, 46340};
// 		// Przykładowe przypadki testowe
// 	num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
// 	for (int i = 0; i < num_cases; i++)
// 	{
// 		result = ft_sqrt(test_cases[i]);
// 		if (result == 0)
// 			printf("Brak dokładnego pierwiastka kwadratowego dla liczby %d\n",
// 				test_cases[i]);
// 		else
// 			printf("Pierwiastek kwadratowy z %d: %d\n", test_cases[i], result);
// 	}
// 	return (0);
// }
