/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:04:22 by dabae             #+#    #+#             */
/*   Updated: 2023/09/10 11:08:45 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(src))
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*#include <stdio.h>

int	main()
{
	char	s[] = "This is a test";

	printf("%s\n", ft_strdup(s));
	return (0);
}*/
