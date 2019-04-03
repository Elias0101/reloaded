/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:22:00 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/02 19:27:17 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	if (src != NULL)
	{
		i = 0;
		while (src[i] != '\0')
			i++;
		copy = malloc(sizeof(char) * (i + 1));
		if (copy != NULL)
		{
			i = 0;
			while (src[i] != '\0')
			{
				copy[i] = src[i];
				i++;
			}
			copy[i] = '\0';
			return (copy);
		}
	}
	return (NULL);
}
