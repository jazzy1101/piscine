/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:41:37 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 09:10:46 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_abs(int start, int end)
{
	if (start > end)
		return (start - end);
	else
		return (end - start);
}
int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	size = ft_abs(start, end) + 1;
	int	i = 0;

	arr = (int *)malloc(sizeof(int)* size);
	if (!arr)
		return (0);
	if (start == size)
	{
		arr[0] = end;
		return (arr);
	}
	else if (start > end)
	{
		while (i <= start - end)
		{
			arr[i] = end + i;
			i++;
		}
	}
	else
	{
		while (i <= end - start)
                {
                        arr[i] = end - i;
                        i++;
                }
	}
	return (arr);
}

#include <stdio.h>

int	main()
{
	int	i = 0;
	int	*arr = ft_rrange(0, -3);
	while (arr[i])
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
