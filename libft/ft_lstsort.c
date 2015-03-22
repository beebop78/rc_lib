/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 16:29:21 by rcargou           #+#    #+#             */
/*   Updated: 2015/03/22 23:22:54 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void quicksort(t_list **start, t_list *elem, t_list *end,
		int (*cmp)(t_list *a, t_list *b))
{
	t_list *j;
	t_list *i;
	t_list *pivot;
	t_list *first;

	first = elem;
	j = elem;
	i = elem;
	pivot = elem;
	if (elem == NULL || elem == end)
		return ;
	while (j && j != end)
	{
		if (j != pivot && cmp(j, pivot))
		{
			if (first == elem)
				first = j;
			ft_lstmove(start, j, elem->prev);
			j = i;
		}
		i = j;
		j = j->next;
	}
	quicksort(start, first, pivot, cmp);
	quicksort(start, pivot->next, end, cmp);
}

void ft_lstsort(t_list **start, int (*cmp)(t_list *a, t_list *b))
{
	quicksort(start, *start, NULL, cmp);
}
