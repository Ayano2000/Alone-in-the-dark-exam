/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:10:07 by ayano             #+#    #+#             */
/*   Updated: 2019/08/06 13:25:39 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur(char *str)
{
	int		i = 0;
	int		c = 0;

	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			c = 1;
			i++;
		}
		else if (str[i] != '\t' && str[i] != ' ')
		{
			if (c == 1 && str[i] != '\0')
			{
				write(1, " ", 1);
				write(1, &str[i], 1);
				c = 0;
				i++;
			}
			else
			{
				write(1, &str[i], 1);
				i++;
			}
		}
	}
}




int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		epur(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
