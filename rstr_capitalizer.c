/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:08:38 by ayano             #+#    #+#             */
/*   Updated: 2019/08/06 11:33:18 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	capitalize(char *str)
{
	int		i = 0;
	int		c = 1;

	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\t' && c == 1) && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
			write(1, &str[i], 1);
			c = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t')
		{
			write(1, &str[i], 1);
			c = 1;
		}
		else if ((str[i] != ' ' && str[i] != '\t') && (str[i + 1] != '\t' && str[i + 1] != ' ' && str[i + 1] != '\0'))
		{
			if (str[i] > 64 && str[i] < 91)
				str[i] = str[i] + 32;
			write(1, &str[i], 1);
			c = 1;
		}
		i++;
	}
}



int		main(int argc, char **argv)
{
	int		arg_count = 1;

	if (argc > 1)
	{
		while (argv[arg_count] != '\0')
		{
			capitalize(argv[arg_count]);
			arg_count++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
