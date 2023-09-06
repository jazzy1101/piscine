/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:13:23 by dabae             #+#    #+#             */
/*   Updated: 2023/08/31 14:46:46 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int agrc, char **agrv)
{
	int	i;

	i = 0;
	if (agrc == 2)
	{
		int	n;

		n = 0;
		while (agrv[1][i] != '\0')
		{
			if (agrv[1][i] >= 'a' && agrv[1][i] <= 'z')
				n = agrv[1][i] - 96;
			else if (agrv[1][i] >= 'A' && agrv[1][i] <= 'Z')
				n = agrv[1][i] - 64;
			else
				n = 1;
			while(n > 0)
			{
				write(1, &agrv[1][i], 1);
				n--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
