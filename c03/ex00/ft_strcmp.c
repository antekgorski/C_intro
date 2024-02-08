/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:07:55 by agorski           #+#    #+#             */
/*   Updated: 2024/01/31 19:31:13 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				spr;
	unsigned int	i;

	spr = 0;
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		spr = s1[i] - s2[i];
		if (spr < 0)
			return (spr);
		else if (spr > 0)
			return (spr);
		i++;
	}
	spr = s1[i] - s2[i];
	return (spr);
}

/*int main(void)
{
	char *str1 = "hello2";
	char *str2 = "hello";
	char *str3 = "hello";
	char *str4 = "hollo2";

	// Test 1: Different strings
	int result1 = ft_strcmp(str1, str2);
	printf("Test 1: Result for str1 vs str2: %d\n", result1);

	// Test 2: Same strings
	int result2 = ft_strcmp(str1, str3);
	printf("Test 2: Result for str1 vs str3: %d\n", result2);

	// Test 3: Different strings with different lengths
	int result3 = ft_strcmp(str1, str4);
	printf("Test 3: Result for str1 vs str4: %d\n", result3);

	return (0);
}*/