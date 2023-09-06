/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:24:49 by dabae             #+#    #+#             */
/*   Updated: 2023/09/06 19:22:31 by dabae            ###   ########.fr       */
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
		while (i < len && *argv[2])
		{	
			if (argv[1][i] == *argv[2]++)
				i++;
		}
		if (i == len)
			write(1, argv[1], len);
	}
	write(1, "\n", 1);
	return (0);
}	
