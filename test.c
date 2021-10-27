/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:59:36 by ngardzie            #+#    #+#           */
/*   Updated: 2021/10/23 17:20:27 by ngardzie           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (x >= 'a' && x <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
