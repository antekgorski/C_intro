/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:39:55 by agorski           #+#    #+#             */
/*   Updated: 2024/02/07 13:38:51 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] == ' ')
				|| (str[i - 1] == '+') || (str[i - 1] == '-')))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char test1[] = "hello, world!";
// 	char test2[] = "this is a Test";
// 	char test3[] = "123abc";
// 	char test4[] = "aBc DeF";
// 	char test5[] = "salut, comment tu vas ? 
// 	42mots quarante-deux; cinquante+et+un";
// 	printf("Original: %s\n", test1);
// 	printf("Capitalized: %s\n", ft_strcapitalize(test1));
// 	printf("Original: %s\n", test2);
// 	printf("Capitalized: %s\n", ft_strcapitalize(test2));
// 	printf("Original: %s\n", test3);
// 	printf("Capitalized: %s\n", ft_strcapitalize(test3));
// 	printf("Original: %s\n", test4);
// 	printf("Capitalized: %s\n", ft_strcapitalize(test4));
// 	printf("Original: %s\n", test5);
// 	printf("Capitalized: %s\n", ft_strcapitalize(test5));
// 	return (0);
// }