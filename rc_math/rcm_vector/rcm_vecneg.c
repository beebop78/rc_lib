/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcm_vecneg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 14:15:53 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/11 14:17:53 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rc_math.h"

t_point rcm_vecneg(t_point vec)
{
	vec.x = -vec.x;
	vec.y = -vec.y;
	vec.z = -vec.z;
	return (vec);
}
