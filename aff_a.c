/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <ayano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:58:37 by ayano             #+#    #+#             */
/*   Updated: 2019/06/19 13:03:31 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char **argv)
{
    int i = 0;
    if (argc != 2)
    {
        write(1, "a\n", 2);
        return (0);
    }
    else
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
            {
                write(1, "a\n", 2);
                return (0);
            }
            i++;
        }
        write (1, "\n", 1);
    }
    return (0);
}

