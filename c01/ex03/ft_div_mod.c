/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:51:05 by agorski           #+#    #+#             */
/*   Updated: 2024/01/24 19:51:07 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    int a = 10;
    int b = 3;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("a = %d, b = %d\n", a, b);
    printf("div = %d, mod = %d\n", div, mod);

    return 0;
}*/
