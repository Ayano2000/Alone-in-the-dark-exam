/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:20:39 by ayano             #+#    #+#             */
/*   Updated: 2019/08/06 15:26:53 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i = 0;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
