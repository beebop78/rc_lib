/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:28:57 by rcargou           #+#    #+#             */
/*   Updated: 2014/11/06 13:36:26 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	unsigned int	i;

	i = ft_strlen(str) + 1;
	while (i > 0 && str[i - 1] != c)
		i--;
	if (i > 0)
		return ((char*)(str) + i - 1);
	else
		return (NULL);
}
