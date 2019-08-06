/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:17:09 by ayano             #+#    #+#             */
/*   Updated: 2019/08/06 12:46:00 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_base(char c)
{
	int		nb = 0;

	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int		ft_atoi_base(const char *nbr, unsigned int base)
{
	int		nb = 0;
	int		neg = 1;
	int		i = 0;
	int		current = 0;

	while ((nbr[i] > 8 && nbr[i] < 14) || nbr[i] == ' ')
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			neg = -1;
		i++;
	}
	current = find_base(nbr[i]);
	while (current >= 0 && current < (int)base)
	{
		nb = nb * base + current;
		i++;
		current = find_base(nbr[i]);
	}
	return (nb * neg);
}
