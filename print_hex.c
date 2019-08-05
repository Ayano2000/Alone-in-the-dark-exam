/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:18:09 by ayano             #+#    #+#             */
/*   Updated: 2019/08/05 14:30:38 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int nb)
{
	char *str = "0123456789abcdef";

	if (nb)
	{
		print_hex(nb / 16);
		write(1, &str[nb % 16], 1);
	}
}

int		ft_atoi(char *str)
{
	int		nbr = 0;;
	int		neg = 1;
	int		i = 0;

	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
				|| str[i] == '\r' || str[i] == '\n' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (nbr * neg);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) == 0)
			write(1, "0", 1);
		else
			print_hex(ft_atoi(argv[1]));
	}

	write (1, "\n", 1);
	return (0);
}
