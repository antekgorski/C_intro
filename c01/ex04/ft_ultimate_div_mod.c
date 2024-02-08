/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:50:06 by agorski           #+#    #+#             */
/*   Updated: 2024/01/24 21:53:16 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = 1;
	if (*b != 0)
	{
		temp = *a / *b;
		*b = *a % *b;
		*a = temp;
	}
	else
		return ;
}

/*int main(void)
{
    int a = 10;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return (0);
}*/
