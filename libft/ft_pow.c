/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 19:32:42 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/04 19:33:22 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_pow(int n, int p)
{
	int a;

	a = n;
	if (p <= 0)
		return (1);
	while (p-- > 1)
		n *= a;
	return (n);
}
