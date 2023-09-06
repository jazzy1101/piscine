/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:24:49 by dabae             #+#    #+#             */
/*   Updated: 2023/09/06 19:13:05 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	a;
	int	len;
	
	if (argc == 3)
	{
		len = 0;
	        while (argv[1][len] != '\0')
        	        len++;
		i = 0;
		j = 0;
		while (argv[1][i] != '\0' && argv[2][j] != '\0')
		{	
			if (argv[1][i] == argv[2][j])
				i++;
			else
				j++;
		}
		a = 0;
		if (i == len + 1)
		{
			while (a < len)
			{
				write(1, &argv[1][a], 1);
				a++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}	
