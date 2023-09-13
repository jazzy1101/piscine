/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:49:46 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 11:47:24 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_abs(int start, int end)
{
	if (start < end)
		return -(start - end);
	else
		return (start - end);
}
int	*ft_range(int start, int end)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_abs(start, end) + 1;
	arr = (int *)malloc(sizeof(int) * (size));
	if (!arr)
		return (NULL);
	if (size == 1)
		arr[0] = start;
	i = 0;
	if (start > end)
	{
		while (i < size)
		{
			arr[i] = start - i;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			arr[i] = start + i;
			i++;
		}
	}
	return (arr);
}
#include <stdio.h>

int	main()
{
	int	*arr;
	int	i;

	arr = ft_range(0, 0);
	i = 0;
	while (i < 1)
	{
		printf("%i, ", arr[i]);
		i++;
	}
	return (0);	
}
