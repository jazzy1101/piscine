/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:53:26 by dabae             #+#    #+#             */
/*   Updated: 2023/08/31 17:15:03 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		int	len;
		char	tmp;

		len = 0;
		while (argv[1][len] != '\0')
			len++;
		while (i < (len / 2))
		{
			tmp = argv[1][i];
			argv[1][i] = argv[1][len - i - 1];
			argv[1][len - i - 1] = tmp;	
			i++;
		}
		int	j;

		j = 0;
		while (j < len)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
