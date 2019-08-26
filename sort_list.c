/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 10:20:24 by ayano             #+#    #+#             */
/*   Updated: 2019/08/26 10:28:12 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "list.h"

t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int			temp;
	t_list		*head = lst;
	t_list		*current = head;

	while (current->next != NULL)
	{
		if (cmp(current->data, current->next->data) == 0)
		{
			temp = current->data;
			current->data = current->next->data;
			current->next->data = temp;
			current = head;
		}
		else
			current = current->next;
	}
	return (head);
}
