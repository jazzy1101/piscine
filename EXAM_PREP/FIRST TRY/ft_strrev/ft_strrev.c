/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:27:23 by dabae             #+#    #+#             */
/*   Updated: 2023/08/31 18:25:23 by dabae            ###   ########.fr       */
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
	while (j < (i / 2))
	{
		tmp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = tmp;
		j++;
	}	
	return (str);
}
#include <stdio.h>

int	main()
{
	char	*str;
	char s[] = "You passed the test'";
	
	str = s;

	printf("%s", ft_strrev(str));
	return (0);
}

