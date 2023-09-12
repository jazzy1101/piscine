/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:47:01 by dabae             #+#    #+#             */
/*   Updated: 2023/09/01 10:35:53 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	is_in(char *s, char c, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	compare_write(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if (is_in(s1, s1[i], i))
				{
					write(1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}	

int	main(int argc, char **argv)
{
	if (argc == 3)
		compare_write(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

