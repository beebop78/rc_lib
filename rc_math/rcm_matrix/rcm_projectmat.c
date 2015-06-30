/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcm_projectmat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/30 17:14:38 by rcargou           #+#    #+#             */
/*   Updated: 2015/06/30 19:49:12 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rc_math.h"
# define TO_RADIAN(X) X / 57.29577

float	*rcm_projectmat(float fov, float near, float far, float aspect)
{
	float   *matrix;
	float   x_scale;
	float   y_scale;
	float   frustrum;

	if ((matrix = rcm_identitymat()) == NULL)
		return (NULL);
	y_scale = (float)((1.0f / tan(TO_RADIAN(fov / 2.0f))) * aspect);
	x_scale = y_scale / aspect;
	frustrum = far - near;
	matrix[0] = x_scale;
	matrix[5] = y_scale;
	matrix[10] = -((far + near) / frustrum);
	matrix[11] = -((2 * near * far) / frustrum);
	matrix[14] = -1;
	matrix[15] = 0;
	return (matrix);
}
