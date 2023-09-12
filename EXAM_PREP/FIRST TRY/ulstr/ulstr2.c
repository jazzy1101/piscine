/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:58:08 by dabae             #+#    #+#             */
/*   Updated: 2023/09/05 15:07:43 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if ('a' <= argv[1][i] && argv[1][i] <= 'z')
			{
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
			}
			else if ('A' <= argv[1][i] && argv[1][i] <= 'Z')
			{
				argv[1][i] += 32;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
