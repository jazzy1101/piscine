/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:19:45 by dabae             #+#    #+#             */
/*   Updated: 2023/09/05 17:53:32 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	int	i;
	
	i = 0;
	while ((a[i] != '\0' && b[i] != '\0') && (a[i] == b[i]))
	{
		i++;
	} 
	return (a[i] - b[i]);
}

void	print_arg(int n, char **str)
{
	int     i;
        int     j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	bubble(char *a)
{
	int	length_a;
	int	i;
	int	j;
	char	buffer;

	length_a = 0;
	while (*a)
		length_a++;
	i = 0;
	while (a[i] != '\0' && (i < length_a - 1))
	{
		j = 0;
		while (j < length_a - i - 1)
		{
			if (ft_strcmp(*a[j], *a[j + 1]) < 0)
			{
				buffer = a[j];
				a[j]  = a[j + 1];
				a[j + 1] = buffer;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while ()
	{	
		bubble(argv[i]);
		i++;
		}
		num--;
	}
	print_arg(argc, argv);
	return (0);
}
