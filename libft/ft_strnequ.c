/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 21:09:21 by rcargou           #+#    #+#             */
/*   Updated: 2014/11/05 22:13:57 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int a;

	if (!s1 || !s2)
		return (0);
	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	return (1);
}
