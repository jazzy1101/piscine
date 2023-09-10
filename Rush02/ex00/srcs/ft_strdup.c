/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:10:16 by dabae             #+#    #+#             */
/*   Updated: 2023/09/10 17:45:23 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_rush.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int	i;

	s =(char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	
	if (!s)
		return (NULL);
	else
	{
		i = 0;
		while(src[i])
		{
			s[i] = src[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
}

