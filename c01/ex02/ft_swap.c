/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:13:48 by agorski           #+#    #+#             */
/*   Updated: 2024/01/24 12:13:51 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	*swap;
	int	z;

	z = 1;
	swap = &z;
	*swap = *a;
	*a = *b;
	*b = *swap;
}

/*int main(void)
{
    int x = 1;
    int y = 2;

    printf("Przed zamianą: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Po zamianie: x = %d, y = %d\n", x, y);

    return 0;
}*/
