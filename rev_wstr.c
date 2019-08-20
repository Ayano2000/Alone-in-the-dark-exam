/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:53:56 by ayano             #+#    #+#             */
/*   Updated: 2019/08/20 13:05:04 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *str)
{
	int		fast = 0;
	int		slow = 0;
	int		current = 0;

	while (str[fast + 1] != '\0')
		fast++;
	slow = fast;
	current = fast;
	while (fast >= 0)
	{
		current = fast;
		slow = fast;
		while (str[fast] != ' ' && str[fast] != '\t' && fast >= 0)
			fast--;
		fast++;
		current = fast;
		while (current <= slow)
		{
			write(1, &str[current], 1);
			current++;
		}
		slow = fast;
		if (fast > 0)
			write(1, " ", 1);
		fast = fast - 2;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
