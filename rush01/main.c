/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:37:40 by zslowian          #+#    #+#             */
/*   Updated: 2024/01/28 21:37:35 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	generate_permutations(int *array, int start, int end, int **output,
				int *count);
extern int	**allocate_2d_array(int rows, int cols);
extern void	deallocate_2d_array(int **array, int rows);
extern void	print_solution(int **grid);
extern int		find_solution(int **grid, int **permutations, int permutation_count,
			int *clues);
extern int	*read_input(char user_input[]);

int	main(int argc, char *argv[])
{
	int	*clues;
	int	numbers[] = {1, 2, 3, 4};
	int	permutation_count;
	int	**grid;
	int	solution_found;
	int	**permutations;

	if (argc > 1)
	{
		clues = read_input(argv[1]);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	permutation_count = 0;
	permutations = allocate_2d_array(24, 4);
	generate_permutations(numbers, 0, 3, permutations, &permutation_count);
	grid = allocate_2d_array(4, 4);
	solution_found = find_solution(grid, permutations, permutation_count,
			clues);
	if (!solution_found)
	{
		write(1, "Error\n", 6);
	}
	else
		print_solution(grid);
	deallocate_2d_array(grid, 4);
	deallocate_2d_array(permutations, 24);
	return (0);
}
