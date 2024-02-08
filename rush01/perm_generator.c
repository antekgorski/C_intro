/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perm_generator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:31:26 by zslowian          #+#    #+#             */
/*   Updated: 2024/01/28 16:17:11 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	generate_permutations(int *array, int start, int end, int **output,
		int *count)
{
	int i;

	if (start == end)
	{
		i = 0;
		while (i <= end)
		{
			output[*count][i] = array[i];
			i++;
		}
		(*count)++;
		return ;
	}
	i = start;
	while (i <= end)
	{
		swap(&array[start], &array[i]);
		generate_permutations(array, start + 1, end, output, count);
		swap(&array[start], &array[i]);
		i++;
	}
}