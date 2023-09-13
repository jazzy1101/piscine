/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:35:33 by darambae          #+#    #+#             */
/*   Updated: 2023/09/13 21:20:28 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i = 0;
	
	while (s[i])
		i++;
	return (i);
}
char	*to_lower(char *s)
{
	int	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
		i++;
	}
	return (s);
}
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int	i = 1;
		while (i < ac)
		{
			int	j = 0;
			while (av[i][j])
			{
				while (av[i][j] && av[i][j] != ' ' && av[i][j] != '\t' && av[i][j] != '\n')
					j++;
				if (av[i][j - 1] >= 'a' && av[i][j - 1] <= 'z')
					av[i][j - 1] -= 32;
				while (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t' || av[i][j] == '\n'))
					j++;				

			}
			write(1, &av[i], ft_strlen(av[i]));
			i++;
		}
		/*i = 0;
		while (av[i])
		{

			i++;
		}*/
	}
	write(1, "\n", 1);
	return (0);
}
