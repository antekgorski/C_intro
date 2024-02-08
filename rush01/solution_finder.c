/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:38:26 by zslowian          #+#    #+#             */
/*   Updated: 2024/01/28 16:21:18 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	copy_arrays(int **permutations, int **grid, int i, int j, int k,
				int l);
extern int	check_clues(int **grid, int *clues);
extern void	print_solution(int **grid);

int	find_solution(int **grid, int **permutations, int permutation_count,
		int *clues)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < permutation_count)
	{
		j = 0;
		while (j < permutation_count)
		{
			k = 0;
			while (k < permutation_count)
			{
				l = 0;
				while (l < permutation_count)
				{
					copy_arrays(permutations, grid, i, j, k, l);
					if (check_clues(grid, clues))
						return (1);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
