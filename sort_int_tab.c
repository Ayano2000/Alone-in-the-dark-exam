/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:10:32 by exam              #+#    #+#             */
/*   Updated: 2019/08/14 11:04:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_smallest(int *tab, int i, unsigned int size)
{
	int		smallest = tab[i];
	while (i < size)
	{
		if (tab[i] <= smallest)
			smallest = tab[i];
		i++;
	}
	return (smallest);	
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	int				temp1 = 0;
	int				temp2 = 0;
	while (i < (int)size)
	{
		temp2 = find_smallest(tab, i, size);
		while (tab[j] != temp2)
			j++;
		temp1 = tab[i];
		tab[i] = temp2;
		tab[j] = temp1;
		i++;
		j = i;
	}
}
