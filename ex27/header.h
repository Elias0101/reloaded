/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnigellu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:25:03 by bnigellu          #+#    #+#             */
/*   Updated: 2019/04/02 17:25:08 by bnigellu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

# include <sys/types.h>

# include <sys/stat.h>

# include <fcntl.h>

int		proverka (int n);

void	ft_putstr(char *str);

int		compair(char *s1, char *s2);

#endif
