/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getoptions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:10:54 by rcargou           #+#    #+#             */
/*   Updated: 2015/08/14 12:27:10 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void			seek_opt(int *opt, char *alphabet, char *world)
{
	int i;
	int j;

	i = 0;
	while (world[i])
	{
		j = 0;
		while (alphabet[j])
		{
			if (alphabet[j] == world[i])
				opt[j] = 1;
			j++;
		}
		i++;
	}
}

int					*ft_getoptions(char *alphabet, int ac, char **av)
{
	int		i;
	int		j;
	char	**s;
	int		*options;

	ac--;
	av++;
	i = 0;
	options = ft_memalloc(ft_strlen(alphabet) * sizeof(int));
	while (i < ac)
	{
		j = 0;
		s = ft_strsplit(av[i], ' ');
		while (s[j])
		{
			if (s[j][0] != '-')
				return (options);
			seek_opt(options, alphabet, s[j]);
			j++;
		}
		i++;
	}
	return (options);
}
