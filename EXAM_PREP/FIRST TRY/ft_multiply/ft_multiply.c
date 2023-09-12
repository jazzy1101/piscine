/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiply.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:02:03 by dabae             #+#    #+#             */
/*   Updated: 2023/08/28 17:11:20 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_multiply(int *a, int b)
{
	int	c;

	c = a;
	return (*c * b);
}

int	main(void)
{
	int 	*a;

	*a = 3;
	printf("%d",ft_multiply(a ,5));
}


