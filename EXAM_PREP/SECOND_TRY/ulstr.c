/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:57:25 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 09:04:43 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
