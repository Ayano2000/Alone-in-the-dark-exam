/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <ayano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:31:41 by ayano             #+#    #+#             */
/*   Updated: 2019/06/19 17:08:14 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
}

void    ft_toupper(char *str, int i)
{
    if (str[i] > 96 && str[i] < 123)
            str[i] = str[i] - 32;
    write(1, &str[i], 1);
}

void    ft_tolower(char *str, int i)
{
    if (str[i] > 65 && str[i] < 91)
            str[i] = str[i] + 32;
    write(1, &str[i], 1);
}

void    capitalizer(char *str)
{
    int i = 0;
    int isfirstlet = 1;
    while (str[i] != '\0')
    {
        if (str[i] == '\t' || str[i] == ' ')
        {
            isfirstlet = 1;
            write(1, &str[i], 1);
        }
        else if (str[i] != '\t' && str[i] != ' ' && isfirstlet == 1)
        {
            ft_toupper(str, i);
            isfirstlet = 0;
        }
        else if (str[i] != '\t' && str[i] != ' ' && isfirstlet == 0)
        {
            ft_tolower(str, i);
        }
        i++;
    }
    write(1, "\n", 1);
}

int     main(int argc, char **argv)
{
    int x = 1;
    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        while (x < argc)
        {
            capitalizer(argv[x]);
            x++;
        }
    }
    return (0);
}
