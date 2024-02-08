/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:21:10 by agorski           #+#    #+#             */
/*   Updated: 2024/02/05 01:21:22 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
}

// int	main(void)
// {
// 	int index = 6;
// 	int result = ft_fibonacci(index);
// 	printf("Fibonacci number at index %d: %d\n", index, result);
// 	return (0);
// }