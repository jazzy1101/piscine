/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:28:46 by dabae             #+#    #+#             */
/*   Updated: 2023/09/10 17:36:45 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_strstr(char **str_array, int array_l, char *to_find)
{
	int		str_i;
	int		find_i;
	int		index;

	str_i = 0;
	index = 0;
	find_i = 0;
	while (str_i < array_l)
	{
		while (to_find[find_i] && (to_find[find_i] == str_array[str_i][index]))
		{
			find_i++;
			index++;
			if (str_array[str_i][index] == ':' && to_find[find_i] == '\0')
			{
				return (str_array[str_i]);
			}
		}
		str_i++;
		find_i = 0;
		index = 0;
	}
	return (0);
}

