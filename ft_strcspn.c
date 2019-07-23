/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:08:29 by ayano             #+#    #+#             */
/*   Updated: 2019/07/23 18:16:50 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int		counter = 0;
	int		iterator = 0;
	int		ret = 0;

	while (s[counter] != '\0')
	{
		iterator = 0;
		while (reject[iterator] != '\0')
		{
			if (s[counter] == reject[iterator])
				return (ret);
			iterator++;
		}
		ret++;
		counter++;
	}
	return (ret);
}
