/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:47:34 by agorski           #+#    #+#             */
/*   Updated: 2024/01/28 21:02:34 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int main() {
  char dest[20];
  char src[] = "Hello";
  unsigned int n = 5;

  char *result = ft_strncpy(dest, src, n);

  printf("Source string: %s\n", src);
  printf("Destination string before copy: %s\n", dest);
  printf("Destination string after copy: %s\n", result);

  if (strcmp(result, dest) == 0) {
    printf("Success\n");
  } else {
    printf("Failed\n");
  }
  return 0;
}*/
