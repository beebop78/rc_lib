/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcm_dotproduct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 21:01:42 by rcargou           #+#    #+#             */
/*   Updated: 2015/09/02 15:03:42 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rc_math.h"

double	rcm_dotproduct(t_point a, t_point b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}