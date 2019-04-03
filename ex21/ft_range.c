/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:28:34 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/02 19:42:25 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *mass;

	if (min >= max)
		return (NULL);
	mass = malloc(sizeof(int) * (max - min));
	if (mass == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		mass[i] = min;
		i++;
		min++;
	}
	return (mass);
}
