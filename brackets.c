/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayano <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:05:58 by ayano             #+#    #+#             */
/*   Updated: 2019/10/18 13:22:48 by ayano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_match(char open, char close)
{
	if (open == '(' && close == ')')
		return (1);
	if (open == '[' && close ==']')
		return (1);
	if (open == '{' && close == '}')
		return (1);
	return (0);
}

int		brackets(char *str, char *stack)
{
	int		i = 0;
	int		top = -1;
	while (str[i] != '\0')
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			top++;
			stack[top] = str[i];
		}
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (!stack[top])
				return (0);
			if (is_match(stack[top], str[i]) == 0)
				return (0);
			else {
				stack[top] = 0;
				top--;
			}
		}
		i++;
	}
	if (stack[top] == 0)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i = 1;
	char	stack[512];
	if (argc > 1)
		while (i < argc)
		{
			if (brackets(argv[i], stack))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	else
	{
		write(1, "\n", 1);
	}
}
