/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:49:27 by agorski           #+#    #+#             */
/*   Updated: 2024/02/01 10:55:42 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}

/*int main() {
	char dest[50] = "Hello, "; // Tablica docelowa
	char *src = "world!"; // Napis źródłowy

	// Wywołanie funkcji ft_strcat
	ft_strcat(dest, src);

	// Wypisanie wyniku
	printf("Po polaczeniu: %s\n", dest);

	return (0);
}*/