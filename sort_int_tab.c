/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 09:48:48 by ayano             #+#    #+#             */
/*   Updated: 2019/08/26 10:02:53 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int         is_sorted(int *tab, unsigned int size)
{
	unsigned int    i = 0;
	while ((i + 1) < size)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void		sort_int_tab(int *tab, unsigned int size)
{
	int				temp = tab[0];
	int				check;
	unsigned int	i = 0;
	
	while ((i + 1) < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
	check = is_sorted(tab, size);
	if (check == 0)
		sort_int_tab(tab, size);
}
