/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:41:17 by agorski           #+#    #+#             */
/*   Updated: 2024/02/01 13:24:00 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "world!";
	unsigned int nb = 9;

	printf("Przed wywołaniem ft_strncat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);

	*ft_strncat(dest, src, nb);

	printf("\nPo wywołaniu ft_strncat:\n");
	printf("dest: %s\n", dest);

	return (0);
}*/