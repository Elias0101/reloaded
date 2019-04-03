/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnigellu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:24:45 by bnigellu          #+#    #+#             */
/*   Updated: 2019/04/02 17:24:48 by bnigellu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
		i++;
	while (n != i)
	{
		write(1, &str[n], 1);
		n++;
	}
}

int		compair(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && ((s1[i] != '\0') && (s2[i] != '\0')))
		i++;
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (1);
	else
		return (0);
}

int		proverka(int n)
{
	if (n == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (n > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}
