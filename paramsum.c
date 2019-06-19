/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <ayano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:27:35 by ayano             #+#    #+#             */
/*   Updated: 2019/06/19 13:41:38 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    else if (n > 10)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + 48);
}

int     main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "0\n", 2);
        return (0);
    }
    else if (argc >= 2)
    {
        ft_putnbr(argc - 1);
    }
    write(1, "\n", 1);
    return (0);
}