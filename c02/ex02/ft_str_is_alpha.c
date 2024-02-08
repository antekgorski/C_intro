/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:01:30 by agorski           #+#    #+#             */
/*   Updated: 2024/01/29 17:58:16 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	printf("Testing 'ft_str_is_alpha(\"Hello\")': %d\n",
		ft_str_is_alpha("Hello"));

	printf("Testing 'ft_str_is_alpha(\"bc123\")': %d\n",
		ft_str_is_alpha("bc123"));

	printf("Testing 'ft_str_is_alpha(\"\\0\")': %d\n", ft_str_is_alpha(""));
	
	printf("Testing 'ft_str_is_alpha(\"aA1$\")': %d\n",
		ft_str_is_alpha("aA1$"));
	return (0);
}*/
