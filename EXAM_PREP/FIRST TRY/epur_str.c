/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:00:26 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 14:13:48 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n'))
				i++;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\n')
			{
				write(1, &av[1][i], 1);
				i++;
			}
			if (av[1][i])
			{
				write(1, " ", 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
