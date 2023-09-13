/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:57:49 by darambae          #+#    #+#             */
/*   Updated: 2023/09/13 20:32:12 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	char	s;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		s = (n % 10) + '0';
		write(1, &s, 1);
	}
}	

int	ft_atoi(char *s)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;

	while (s[i])
	{
		while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
			i++;
		if (s[i] == '-')
			sign = -1;
		if (s[i] == '-' || s[i] == '+')
			i++;
		while (s[i] >= '0' && s[i] <= '9')
		{
			res = res*10 + s[i] - '0';
			i++;
		}
	}
	return (res * sign);
}
int	is_prime(int n)
{
	int	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	main(int ac, char **av)
{
	int 	i = 2;
	int	nbr = 0;
	int	sum = 0;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		if (nbr < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		while (i <= nbr)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);				
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
