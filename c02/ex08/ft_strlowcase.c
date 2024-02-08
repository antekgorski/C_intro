/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:44:14 by agorski           #+#    #+#             */
/*   Updated: 2024/01/29 22:24:35 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strlowcase(char *str)
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
	return (str);
}

/*int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "1234";
	char str3[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	char str4[] = "This is a test string.";
	char str5[] = "1234567890";
	char str6[] = "a";
	char str7[] = "A";
	char str8[] = "";

	printf("Before: %s\n", str1);
	printf("After: %s\n", ft_strlowcase(str1));
	printf("Before: %s\n", str2);
	printf("After: %s\n", ft_strlowcase(str2));
	printf("Before: %s\n", str3);
	printf("After: %s\n", ft_strlowcase(str3));
	printf("Before: %s\n", str4);
	printf("After: %s\n", ft_strlowcase(str4));
	printf("Before: %s\n", str5);
	printf("After: %s\n", ft_strlowcase(str5));
	printf("Before: %s\n", str6);
	printf("After: %s\n", ft_strlowcase(str6));
	printf("Before: %s\n", str7);
	printf("After: %s\n", ft_strlowcase(str7));
	printf("Before: %s\n", str8);
	printf("After: %s\n", ft_strlowcase(str8));

	return (0);
}*/
