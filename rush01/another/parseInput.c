/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseInput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:48:50 by arosinsk          #+#    #+#             */
/*   Updated: 2024/01/28 20:49:21 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void error();
void parseInput(char *input, int views[])
{
    int	i;
    
    i = 0;
    while (i < 16) {
        if (*input < '1' || *input > '4' || (i < 15 && *(input + 1) != ' ')) {
            error();
        }
        views[i] = *input - '0';
        input += i < 15 ? 2 : 1;
        i++;
    }
}
