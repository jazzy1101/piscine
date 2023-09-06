/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:27:05 by dabae             #+#    #+#             */
/*   Updated: 2023/09/05 14:52:01 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if(argv[1][i] == argv[2][0])
				argv[1][i] == argv[3][0];
			write(1, &argv[1][i], 1);	
			i++;
		}
	} 
	write(1, "\n", 1);
	return (0);
}
