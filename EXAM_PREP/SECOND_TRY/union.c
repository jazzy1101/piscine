/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:37:08 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 10:49:16 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	already_in_self(char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int	already_in_other(char *s, char c)
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
	int	j;

	if (ac == 3)
	{
		j = 0;
		while (av[1][j])
		{
			if (!already_in_self(av[1], av[1][j], j))
				write(1, &av[1][j], 1);
			j++;
		}
		i = 0;
		while (av[2][i])
		{
			if (!already_in_other(av[1], av[2][i]) && !already_in_self(av[2], av[2][i], i))
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}	
