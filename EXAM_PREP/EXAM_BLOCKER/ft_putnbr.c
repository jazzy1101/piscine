/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:06:59 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 13:23:10 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int	n)
{
	int	i = 0;
	int	res = 0;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar((n % 10) + '0');
}

void	main()
{

	ft_putnbr(5637);
	write(1, "\n", 1);
	ft_putnbr(-5637);	
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(56976837);
	write(1, "\n", 1);
}
