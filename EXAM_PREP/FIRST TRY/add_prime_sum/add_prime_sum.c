/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:14:35 by dabae             #+#    #+#             */
/*   Updated: 2023/09/12 14:58:45 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;
	int	sum;

	i = 0;
	num = 0;
	sum = 0;
	if (argc == 2 && argv[1][0] != '-')
	{
		while (argv[1][i] && argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			num = num * 10 + argv[1][i] - '0';
			i++;
		}
		int	is_prime(int n)
		{
			int	j;
			
			j = 0;
			while (j <= n / j && n % j != 0)
				j++;
			if (j == n)
				return (1);
			else
				return (0);
		}
		i = 0;
		while (i <= num)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		void	itoa(int a)
		{
			char	s;

			if (a > 9)
				itoa(a / 10);
			else
			{
				s = (a % 10) + '0';
				write(1, &s, 1);
			}
		}
		itoa(sum);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
