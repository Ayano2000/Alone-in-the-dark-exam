/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:43:27 by ayano             #+#    #+#             */
/*   Updated: 2019/08/06 14:20:39 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int     is_prime(int n)
{
	int     i = 2;
	while (i < n)
	{
        if (!(n % i))
            return (0);
		i++;
	}
    return (1);
}

void	add_prime_sum(int nbr)
{
	int ans = 	0;
	int	multi = 2;

	if (nbr == 1)
	{
		write(1, "1", 1);
		write(1, "\n", 1);
		exit(1);
	}
	if (nbr < 0)
	{
		write(1, "0\n", 2);
		exit(1);
	}
	while (multi <= nbr)
	{
		if (is_prime(multi))
			ans = ans + multi;
		multi++;
	}
	ft_putnbr(ans);
}

int		ft_atoi(char *str)
{
	int		res = 0;
	int		neg = 1;
	int		i = 0;

	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
