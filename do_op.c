/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:27:02 by ayano             #+#    #+#             */
/*   Updated: 2019/07/23 18:38:58 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if (argv[2][0] == '%')
            printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
