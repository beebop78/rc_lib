/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 14:30:37 by rcargou           #+#    #+#             */
/*   Updated: 2015/01/16 15:01:36 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				color_add(int color1, int color2)
{
	int v1;
	int v2;
	int new;

	v1 = getmix(color1, 'r');
	v2 = getmix(color2, 'r') + v1;
	v2 = v2 > 255 ? 255 : v2;
	new = v2 << 16;
	v1 = getmix(color1, 'g');
	v2 = getmix(color2, 'g') + v1;
	v2 = v2 > 255 ? 255 : v2;
	new += v2 << 8;
	v1 = getmix(color1, 'b');
	v2 = getmix(color2, 'b') + v1;
	v2 = v2 > 255 ? 255 : v2;
	new += v2;
	return (new);
}

