/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:04:38 by agorski           #+#    #+#             */
/*   Updated: 2024/01/20 21:36:01 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		c = c + 1;
	}
}

/*int main(void) 
{
	ft_print_alphabet();
	return 0;

}*/
