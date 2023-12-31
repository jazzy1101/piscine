/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:56:31 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 13:40:34 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	self_check(char *s, char c, int	pos)
{
	int	i;

	i = 0;
	while (s[i] && i < pos)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_other(char *s, char c)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
	       		if (!self_check(av[1], av[1][i], i) && check_other(av[2], av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
