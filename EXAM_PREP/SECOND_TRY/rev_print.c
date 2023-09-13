/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:20:59 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 08:37:29 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	len;

	len = 0;
	if (str)
	{
		while (str[len])
			len++;
		while (len - 1 >= 0)
		{
			write(1, &str[len - 1], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (str);
}
int	main(int argc, char **argv)
{
	(void)argc;
	ft_rev_print(argv[1]);
	return (0);
}
