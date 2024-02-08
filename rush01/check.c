/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:34:22 by zslowian          #+#    #+#             */
/*   Updated: 2024/01/28 16:17:12 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	is_unique(int *array, int size);

int	check_row_clue(int **grid, int *clues, int i, int *row)
{
	int	view;
	int	max_height;
	int	j;

	view = 0;
	max_height = 0;
	j = 0;
	while (j < 4)
	{
		if (grid[i][j] > max_height)
		{
			max_height = grid[i][j];
			view++;
		}
		row[j] = grid[i][j];
		j++;
	}
	if (clues[i + 8] != view || !is_unique(row, 4))
	{
		return (0);
	}
	view = 0;
	max_height = 0;
	j = 3;
	while (j >= 0)
	{
		if (grid[i][j] > max_height)
		{
			max_height = grid[i][j];
			view++;
		}
		row[3 - j] = grid[i][j];
		j--;
	}
	if (clues[i + 12] != view || !is_unique(row, 4))
	{
		return (0);
	}
	return (1);
}

int	check_clue(int **grid, int *clues, int i, int *row, int *col)
{
	int	view;
	int	max_height;
	int	j;

	view = 0;
	max_height = 0;
	j = 0;
	while (j < 4)
	{
		if (grid[j][i] > max_height)
		{
			max_height = grid[j][i];
			view++;
		}
		col[j] = grid[j][i];
		j++;
	}
	if (clues[i] != view || !is_unique(col, 4))
	{
		return (0);
	}
	view = 0;
	max_height = 0;
	j = 3;
	while (j >= 0)
	{
		if (grid[j][i] > max_height)
		{
			max_height = grid[j][i];
			view++;
		}
		col[3 - j] = grid[j][i];
		j--;
	}
	if (clues[i + 4] != view || !is_unique(col, 4))
	{
		return (0);
	}
	return (check_row_clue(grid, clues, i, row));
}

int	check_clues(int **grid, int *clues)
{
	int	i;
	int	row[4];
	int	col[4];

	i = 0;
	while (i < 4)
	{
		if (!check_clue(grid, clues, i, row, col))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
