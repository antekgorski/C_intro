/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:37:22 by agorski           #+#    #+#             */
/*   Updated: 2024/02/01 15:34:22 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (s1[i] == s2[i]) && (n
			- 1 != 0))
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		result1;
	int		result2;
	int		result3;

	str1 = "444";
	str2 = "444";
	str3 = "444";
	str4 = "444";
	// Test 1: Różne ciągi znaków
	result1 = ft_strncmp(str1, str2, 2);
	printf("Test 1: Wynik dla str1 vs str2: %d\n", result1);
	// Test 2: Te same ciągi znaków
	result2 = ft_strncmp(str1, str3, 2);
	printf("Test 2: Wynik dla str1 vs str3: %d\n", result2);
	// Test 3: Różne ciągi znaków o różnych długościach
	result3 = ft_strncmp(str1, str4, 2);
	printf("Test 3: Wynik dla str1 vs str4: %d\n", result3);
	return (0);
}*/