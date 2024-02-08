/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printGrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:51:18 by arosinsk          #+#    #+#             */
/*   Updated: 2024/01/28 20:52:19 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void printGrid(int grid[4][4])
{
    char buffer[2];
    buffer[1] = ' ';

    int i = 0;
    while (i < 4) {
        int j = 0;
        while (j < 4) {
            buffer[0] = grid[i][j] + '0';
            write(1, buffer, 2);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

