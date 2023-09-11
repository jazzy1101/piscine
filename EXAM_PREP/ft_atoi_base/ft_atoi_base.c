/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:13:02 by dabae             #+#    #+#             */
/*   Updated: 2023/09/11 16:15:29 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_to_lowercase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	ft_convert(char s)
{
	if (s >= '0' && s <= '9')
		return (s - '0');
	else if (s >= 'a' && s <= 'f')
		return (s - 'a' + 10);
	return (0);
}

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

int	ft_atoi(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	i++;
	while (str[i] >= base[0] && str[i] <= base[str_base - 1])
	{
		ft_convert(str[i])
		i++;
	}			
	return (res * sign);
}


int	ft_atoi_base(const char *str, int str_base)
{
	char	base[17] = "0123456789abcdef";
