/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:18:47 by ngardzie          #+#    #+#             */
/*   Updated: 2021/11/08 09:13:15 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int	nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 15)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
