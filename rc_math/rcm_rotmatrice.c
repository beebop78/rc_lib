/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcm_rotmatrice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:23:00 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/10 18:36:38 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rc_math.h"

t_point		rcm_rotmatrice(t_point point, double rotx, double roty, double rotz)
{
	t_point tmp;

	tmp.x = point.x;
	tmp.y = point.y;
	tmp.z = point.z;
	point.y = tmp.y * cos(rotx) + tmp.z * -sin(rotx);
	point.z = tmp.y * sin(rotx) + tmp.z * cos(rotx);
	point.x = tmp.x * cos(rotz) + tmp.y * -sin(rotz);
	point.y = tmp.x * sin(rotz) + tmp.y * cos(rotz);
	point.x = tmp.x * cos(roty) + tmp.z * sin(roty);
	point.z = tmp.x * -sin(roty) + tmp.z *cos(roty);
	return (point);
}

