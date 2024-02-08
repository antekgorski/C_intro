/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:15:46 by agorski           #+#    #+#             */
/*   Updated: 2024/01/29 20:28:35 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("Testing 'ft_str_is_uppercase(\"HELLO\")': %d\n",
		ft_str_is_uppercase("HELLO"));

	printf("Testing 'ft_str_is_uppercase(\"hello\")': %d\n",
		ft_str_is_uppercase("hello"));

	printf("Testing 'ft_str_is_uppercase(\"\\0\")': %d\n",
		ft_str_is_uppercase(""));

	printf("Testing 'ft_str_is_uppercase(\"A1$\")': %d\n",
		ft_str_is_uppercase("A1$"));
	return (0);
}*/