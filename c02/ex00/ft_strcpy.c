/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:38:02 by agorski           #+#    #+#             */
/*   Updated: 2024/01/27 14:08:48 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[10];
	char 	temp[] = "Helllllo";
	char	src[10] = "0123456789";
	ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}*/

//		printf("dst %p src %p\n", dest+i, src+i);
