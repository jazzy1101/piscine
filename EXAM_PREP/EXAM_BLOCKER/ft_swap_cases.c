/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:24:28 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 13:30:06 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_swap_cases(char *s)
{
	int	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	return (s);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_swap_cases(av[1]));
	}
	return (0);
}
