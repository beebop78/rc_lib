/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rc_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 00:49:59 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/10 02:41:23 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RC_MATH_H
# define RC_MATH_H
# define PI 3.1415926535897932384626433832795
# define PRECISION 1E-26
# include <stdlib.h>

typedef struct	s_point
{
	double		x;
	double		y;
	double		z;
}				t_point;
double rcm_sqrt(double n);
double rcm_fabs(double n);
#endif