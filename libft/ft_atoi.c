/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:54:01 by rcargou           #+#    #+#             */
/*   Updated: 2014/11/11 14:40:24 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_atoi(const char *str)
{
	int a;
	int b;
	int number;

	number = 0;
	a = 0;
	b = 1;
	if (!str)
		return (0);
	while (str[a] >= 127 || str[a] < 33)
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while ((str[a] >= '0' && str[a] <= '9') && str[a] != '\0')
	{
		number *= 10;
		number += str[a] - '0';
		a++;
	}
	return (number * b);
}
