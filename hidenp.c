/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:49:01 by ayano             #+#    #+#             */
/*   Updated: 2019/08/05 15:03:50 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_strings(char *str1, char *str2)
{
	int		s1_i = 0;
	int		s2_i = 0;
	
	if (str1[s1_i] == '\0')
		write(1, "1", 1);
	else
	{
		while(str1[s1_i] != '\0')
		{
			while (str2[s2_i] != '\0')
			{
				if(str1[s1_i] == str2[s2_i])
					break ;
				s2_i++;
			}
			if (str2[s2_i] == '\0')
			{
				write(1, "0", 1);
				break ;
			}
			s1_i++;
		}
		if (str1[s1_i] == '\0')
			write(1, "1", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		check_strings(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
