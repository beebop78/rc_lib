/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 13:37:47 by rcargou           #+#    #+#             */
/*   Updated: 2015/09/02 15:43:17 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strerase(char *str, int n)
{
	int i;

	i = 0;
	while (str[n + i] && str[i])
	{
		str[i] = str[n + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
