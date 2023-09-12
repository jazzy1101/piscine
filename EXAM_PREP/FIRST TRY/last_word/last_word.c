/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:25:05 by dabae             #+#    #+#             */
/*   Updated: 2023/08/31 16:38:29 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	i = 0;
	while (argv[1][i] != '\0')
		i++;
	if (argc == 2)
	{
		while (i > 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		j = 0;
		while (i > 0 && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			i--;
			j++;
		}
		while(j > 0)
		{
			i++;
			write(1, &argv[1][i], 1);
			j--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

