/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_user_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:12:24 by zslowian          #+#    #+#             */
/*   Updated: 2024/01/28 17:32:53 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdlib.h>

int *read_input(char user_input[])
{
    char    *ptr;
    int *clues = (int *)malloc(16 * sizeof(int));
    int i;

    ptr = user_input;
    i = 0;
    while(*ptr != '\0')
        {
            if(*ptr > 48 && *ptr < 53)
            {
                clues[i] = *ptr;
                i++;
            }
            ptr++;
        }
    return (clues);
}
/*int main(int argc, char *argv[])
{
    int *clues;
    if(argc > 1)
    {
        clues = read_input(argv[1]);
    }
    else return (1);
    while(*clues)
    {
        write(1, clues, 1);
        clues++;
    }
    write(1, "\n", 1);
    return (0);
} */