/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:24:38 by dabae             #+#    #+#             */
/*   Updated: 2023/09/04 08:57:31 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_swap_cases(char *str)
{
	int	i;

	i  = 0;
	while (str[i] != '\0')
	{		
		if ('a'<= str[i] && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
#include <stdio.h>
int	main()
{
 	char str[] = "THIS is A string";
	printf("%s", ft_swap_cases(str));
 	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	str[99];
	int i;	

	i = -1;
	while(++i <= strlen("This is A strinG"))
		str[i] = ("This is A strinG")[i];
	printf("%s", ft_swap_cases(str));
	return (0);
}
*/
