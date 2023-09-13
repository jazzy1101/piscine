/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:27:45 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 15:43:33 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j++])
				i++;
		}
		if (av[1][i] == '\0')
		{
			z = 0;
			while (av[1][z])
			{
				write(1, &av[1][z], 1);
				z++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
