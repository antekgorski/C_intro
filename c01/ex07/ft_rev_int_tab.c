/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:42:21 by agorski           #+#    #+#             */
/*   Updated: 2024/02/06 15:51:14 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

// int	main(void)
// {
// 	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int	size;

// 	size = sizeof(arr) / sizeof(arr[0]);
// 	ft_rev_int_tab(arr, size);
// 	printf("Reversed array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }