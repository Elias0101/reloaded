/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:55:46 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/02 19:20:07 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	swap_str(char **av, int j)
{
	char *str_copy;

	str_copy = av[j];
	av[j] = av[j + 1];
	av[j + 1] = str_copy;
}

void	make_sort(char **av, int ac)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				swap_str(av, j);
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;

	j = 0;
	i = 1;
	make_sort(av, ac);
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
