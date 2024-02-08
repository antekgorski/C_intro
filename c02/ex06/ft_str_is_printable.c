/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:45:44 by agorski           #+#    #+#             */
/*   Updated: 2024/01/29 21:03:04 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("Testing 'ft_str_is_printable(\"HELLO\")': %d\n",
		ft_str_is_printable("HELLO"));

	printf("Testing 'ft_str_is_printable(\"lala\")': %d\n",
		ft_str_is_printable("lala"));

	printf("Testing 'ft_str_is_printable(\"\\0\")': %d\n",
		ft_str_is_printable(""));

	printf("Testing 'ft_str_is_printable(\"A1$\")': %d\n",
		ft_str_is_printable("A1$"));
	return (0);
}*/