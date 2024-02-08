/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:54:34 by arosinsk          #+#    #+#             */
/*   Updated: 2024/01/28 20:55:07 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValid(int grid[4][4], int views[]);
bool solve(int grid[4][4], int views[], int position) {
    if (position == 16) return isValid(grid, views);

    int row = position / 4;
    int col = position % 4;

    int i = 1;
    while (i <= 4) {
        grid[row][col] = i;

        bool valid = true;
        int j = 0;
        while (j < 4) {
            if ((j != col && grid[row][j] == i) || (j != row && grid[j][col] == i)) {
                valid = false;
                break;
            }
            j++;
        }

        if (valid && solve(grid, views, position + 1)) {
            return true;
        }

        i++;
    }

    grid[row][col] = 0;
    return false;
}
