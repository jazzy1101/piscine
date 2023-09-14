/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:11:08 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 09:46:11 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	char	s[17] = "0123456789abcdef";
	char	c[17] = "0123456789ABCDEF";
	int	sign = 1;
	int	res = 0;	
	int	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
			sign = -1;
		while (str[i] == '-' || str[i] == '+')
			i++;
		if (str_base <= 10)
		{
			while (str[i] >= '0' && str[i] <= s[str_base - 1])
			{
				res = res * str_base + (str[i] - '0');
				i++;
			}
		}
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
                        {
                                res = res * str_base + (str[i] - '0');
                                i++;
                        }
			else if (str[i] >= 'a' && str[i] <= s[str_base - 1])
			{
				res = res * str_base + (str[i] - 'a' + 10);
				i++;
			}
			else if (str[i] >= 'A' && str[i] <= c[str_base - 1])
			{
				res = res * str_base + (str[i] - 'A' + 10);
                                i++;
			}
			else
				break;
		}
	}
	return (res * sign);
}
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi_base("12fdb3", 16));
	return (0);
}

