/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:46:27 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 11:37:16 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	count_digits(int nbr)
{
	int	i = 0;
	if (nbr < 0)
		i++;
	if (nbr > 9)
        {
		i++;
               count_digits(nbr / 10);
        }
	return (i + 1);
}

char	*ft_strcpy(char *dest, char *s)
{
	int	i = 0;
	while (s[i])
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int	len;

	len = count_digits(nbr);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
        if (nbr == -2147483648)
                return ("-2147483648\0");
        else if (nbr < 0)
        {
		res[0] = '-';
                nbr *= -1;
        }
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}	
	else
	{
		while (nbr)
		{
			res[--len] = nbr % 10 + '0';
			nbr /= 10;
		}
	}
	return (res);
}
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(42));
	return (0);
}
