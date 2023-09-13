/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:13:02 by dabae             #+#    #+#             */
/*   Updated: 2023/09/12 19:07:22 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_to_lowercase(char c)

	char	s;

	s = c;
	if (c >= 'A' && c <= 'Z')
		s += 32;
	return (s);
}

int	ft_convert(char s)
{
	if (s >= '0' && s <= '9')
		return (s - '0');
	else if (s >= 'a' && s <= 'f')
		return (s - 'a' + 10);
	return (0);
}

/* c04 version
int	ft_double_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
                return (0);
	while (base[i])
	{
                j = i + 1;
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
                while (base[j])
                {
                        if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
*/
int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;
	
	char	base[17];

	base = "0123456789abcdef";
	i = 0;
	sign = 1;
	res = 0;
	
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	i++;
	while (ft_to_lowercase(str[i]) >= base[0] && ft_to_lowercase(str[i]) <= base[str_base - 1])
	{
		res = res * str_base + ft_convert(str[i]) * sign;
		i++;
	}			
	return (res);
}
