/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:51:54 by agorski           #+#    #+#             */
/*   Updated: 2024/02/06 16:35:52 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	rep;
	int	i;
	int	temp;

	rep = 0;
	while (rep < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[(i + 1)])
			{
				temp = tab[i];
				tab[i] = tab[(i + 1)];
				tab[(i + 1)] = temp;
				i++;
			}
			else
				i++;
		}
		rep++;
	}
}

// int	main(void)
// {
// 	int tab[] = {67, 87, 3, 5, 9, 0, 99, 100, 24};
// 	const size_t size = sizeof(tab) / sizeof(tab[0]);

// 	ft_sort_int_tab(tab, size);

// 	printf("Sorted array: ");
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	printf("\n");

// 	return (0);
// }