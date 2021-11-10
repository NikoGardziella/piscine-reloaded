/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:13:22 by ngardzie          #+#    #+#             */
/*   Updated: 2021/11/08 10:02:24 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
