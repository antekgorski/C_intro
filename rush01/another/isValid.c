/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isValid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:55:54 by arosinsk          #+#    #+#             */
/*   Updated: 2024/01/28 20:56:22 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>


bool isValid(int grid[4][4], int views[]) {
    int i = 0;
    while (i < 4) {
        int max, count;

        // Check column from top
        max = count = 0;
        int j = 0;
        while (j < 4) {
            if (grid[j][i] > max) {
                max = grid[j][i];
                count++;
            }
            j++;
        }
        if (count != views[i]) return false;

        // Check column from bottom
        max = count = 0;
        j = 3;
        while (j >= 0) {
            if (grid[j][i] > max) {
                max = grid[j][i];
                count++;
            }
            j--;
        }
        if (count != views[4 + i]) return false;

        // Check row from left
        max = count = 0;
        j = 0;
        while (j < 4) {
            if (grid[i][j] > max) {
                max = grid[i][j];
                count++;
            }
            j++;
        }
        if (count != views[8 + i]) return false;

        // Check row from right
        max = count = 0;
        j = 3;
        while (j >= 0) {
            if (grid[i][j] > max) {
                max = grid[i][j];
                count++;
            }
            j--;
        }
        if (count != views[12 + i]) return false;

        i++;
    }
    return true;
}
