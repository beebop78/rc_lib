/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:12:40 by rcargou           #+#    #+#             */
/*   Updated: 2014/11/08 15:26:30 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (del && alst)
	{
		if (*alst)
		{
			if ((*alst)->content)
				(del)((*alst)->content, (*alst)->content_size);
			free(*alst);
		}
		*alst = NULL;
	}
}
