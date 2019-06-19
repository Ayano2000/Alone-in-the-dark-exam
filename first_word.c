/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <ayano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:30:18 by ayano             #+#    #+#             */
/*   Updated: 2019/06/19 14:57:11 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char **argv)
{
    int i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
        if (argv[1][i] == '\0')
        {
            write(1, "\n", 1);
            return (0);
        }
        while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}