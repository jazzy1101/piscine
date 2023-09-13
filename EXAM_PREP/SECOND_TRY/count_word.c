/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:48:43 by darambae          #+#    #+#             */
/*   Updated: 2023/09/13 19:56:31 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_word(char *av)
{
	int	i = 0;
	int	wd = 0;

	while (av[i])
	{
		while (av[i] && av[i] == ' ')
			i++;
		if (av[i])
			wd++;
		while (av[i] && av[i] != ' ')
			i++;
	}
	return (wd);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d",count_word(av[1]));
	return (0);
}	
