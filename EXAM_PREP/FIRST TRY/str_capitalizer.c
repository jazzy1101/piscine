/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:26:59 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 15:11:56 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*to_lowercase(char *s)
{
	int	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	return (s);
}
int	main(int ac, char **av)
{
	int	i = 1;
	int	j;
	if (ac > 1)
	{
		while (av[i])
		{
			to_lowercase(av[i]);
			j = 0;
			while (av[i][j])
			{	
				if (av[i][0] >= 'a' && av[i][0] <= 'z')
				{
					av[i][0] -= 32;
				}
				if (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t'))
				{
					if (av[i][j + 1] >= 'a' && av[i][j + 1] <= 'z')
						av[i][j + 1] -= 32;
				}
				j++;
			}
			i++;
		}
		i = 1;
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
