/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:44:17 by agorski           #+#    #+#             */
/*   Updated: 2024/01/29 20:06:34 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	printf("Testing 'ft_str_is_lowercase(\"hello\")': %d\n",
		ft_str_is_lowercase("hello"));

	printf("Testing 'ft_str_is_lowercase(\"11111\")': %d\n",
		ft_str_is_lowercase("11111"));

	printf("Testing 'ft_str_is_lowercase(\"\\0\")': %d\n",
	ft_str_is_lowercase(""));

	printf("Testing 'ft_str_is_lowercase(\"aA1$\")': %d\n",
		ft_str_is_lowercase("aA1$"));
	return (0);
}*/