/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:14:52 by dabae             #+#    #+#             */
/*   Updated: 2023/09/06 10:21:54 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(*range) * (max - min));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*arr;	
	
	if (argc != 3)
		return (0);
	printf("size of the array : %d\n", 
	ft_ultimate_range(&arr , atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
