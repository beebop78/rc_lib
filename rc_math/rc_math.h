/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rc_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 00:49:59 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/11 17:20:04 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RC_MATH_H
# define RC_MATH_H
# define PI 3.1415926535897932384626433832795
# define PRECISION 1E-6
# include <stdlib.h>

typedef struct	s_point
{
	double		x;
	double		y;
	double		z;
}				t_point;
double			rcm_sqrt(double n);
double			rcm_fabs(double n);
t_point			rcm_vecsum(t_point vec1, t_point vec2);
double			rcm_min(double *values, int size);
t_point			rcm_vecscalarfactor(t_point vec, double factor);
double			*rcm_2dequation(double a, double b, double c, int *n);
t_point			rcm_vecnormalize(t_point vec);
t_point			rcm_rotmatrice(t_point point, double rotx, double roty, double rotz);
double			rcm_vecnorme(t_point vec);
t_point			rcm_vecneg(t_point vec);
#endif

