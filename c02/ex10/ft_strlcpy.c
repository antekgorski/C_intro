/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:02 by agorski           #+#    #+#             */
/*   Updated: 2024/02/07 21:35:59 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (*(src + i) && --size)
	{
		*dest++ = *(src + i++);
	}
	*dest = '\0';
	while (*(src + i))
	{
		++i;
	}
	return (i);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dest[20];
// 	unsigned int result = ft_strlcpy(dest, src, sizeof(dest));

// 	printf("Source string: %s\n", src);
// 	printf("Destination string: %s\n", dest);
// 	printf("Length of copied string: %u\n", result);

// 	return (0);
// }