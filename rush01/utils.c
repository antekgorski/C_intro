/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:26:55 by zslowian          #+#    #+#             */
/*   Updated: 2024/01/28 16:41:50 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	copy_array(int *src, int *dest, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	copy_arrays(int **permutations, int **grid, int i, int j, int k, int l)
{
	copy_array(permutations[i], grid[0], 4);
	copy_array(permutations[j], grid[1], 4);
	copy_array(permutations[k], grid[2], 4);
	copy_array(permutations[l], grid[3], 4);
}

int	**allocate_2d_array(int rows, int cols)
{
	int	**array;
	int	i;

	array = (int **)malloc(rows * sizeof(int *));
	i = 0;
	while (i < rows)
	{
		array[i] = (int *)malloc(cols * sizeof(int));
		i++;
	}
	return (array);
}

void	deallocate_2d_array(int **array, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	is_unique(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
