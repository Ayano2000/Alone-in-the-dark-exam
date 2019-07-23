/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:46:29 by ayano             #+#    #+#             */
/*   Updated: 2019/07/23 15:08:10 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char	*str)
{
	int		i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int		isdupl(char *str, char c, int index)
{
	int		i = 0;
	while (str[i] != '\0' && i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i = 0;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (!isdupl(argv[1], argv[1][i], i) && isdupl(argv[2], argv[1][i], ft_strlen(argv[2])))
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
