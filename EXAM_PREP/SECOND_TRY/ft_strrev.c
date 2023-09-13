/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:06:07 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 09:29:48 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (j < i)
	{
		tmp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = tmp;
		j++;
		i--;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
