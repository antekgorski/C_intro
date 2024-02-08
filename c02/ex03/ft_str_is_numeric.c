/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:15:33 by agorski           #+#    #+#             */
/*   Updated: 2024/01/29 19:41:16 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	printf("Testing 'ft_str_is_numeric(\"Hello\")': %d\n",
		ft_str_is_numeric("Hello"));

	printf("Testing 'ft_str_is_numeric(\"11111\")': %d\n",
		ft_str_is_numeric("11111"));

	printf("Testing 'ft_str_is_numeric(\"\\0\")': %d\n", ft_str_is_numeric(""));

	printf("Testing 'ft_str_is_numeric(\"aA1$\")': %d\n",
		ft_str_is_numeric("aA1$"));
	return (0);
}*/