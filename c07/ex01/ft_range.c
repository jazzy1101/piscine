/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:15 by dabae             #+#    #+#             */
/*   Updated: 2023/09/04 11:14:04 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (min >= max)
		return (NULL);
	if (arr)
	{
		i = 0;
		while (min + i < max)
		{
			arr[i] = min + i;
			i++;
		}
		arr[max] = '\0';
	}
	return (arr);
}
/*
#include <stdio.h>

int	main()
{
	int	*arr;
	int	i;

	arr = ft_range(5, 9);
	i = 0;
	while (arr[i])
	{		
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
*/
