/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnigellu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:31:49 by bnigellu          #+#    #+#             */
/*   Updated: 2019/04/02 17:31:54 by bnigellu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUFSIZE 10

int			main(int n, char **str)
{
	int		fd;
	int		ret;
	char	buf[BUFSIZE + 1];

	if (proverka(n) == 0)
		return (0);
	fd = open(str[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (((ret = read(fd, buf, BUFSIZE)) != 0) && (ret != -1))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (0);
}
