/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:38:59 by arosinsk          #+#    #+#             */
/*   Updated: 2024/01/28 20:39:01 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

void	error();
void	parseInput(char *input, int views[]);
bool	isValid(int grid[4][4], int views[]);
bool	solve(int grid[4][4], int views[], int position);
void	printGrid(int grid[4][4]);

int	main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        error();
    }

    int	views[16];
    parseInput(argv[1], views);

    int grid[4][4] = {0};
    if (!solve(grid, views, 0))
    {
        error();
    } 
    else
    {
        printGrid(grid);
    }
    return (0);
}







