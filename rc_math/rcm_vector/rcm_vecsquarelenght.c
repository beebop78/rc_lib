/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcm_vecsquarelenght.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:16:58 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/16 15:22:07 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rc_math.h"

double				rcm_vecsquarelength(t_point vec)
{
	return (vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}
