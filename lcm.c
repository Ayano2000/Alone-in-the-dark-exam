/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:44:13 by ayano             #+#    #+#             */
/*   Updated: 2019/08/12 13:53:33 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		multi = 1;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
	{
		while ((a * multi) % b != 0)
			multi++;
		return (a * multi);
	}
	else if (a < b)
	{
		while ((b * multi) % a != 0)
			multi++;
		return (b * multi);
	}
	else
		return (a);
}
