/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:19:45 by dabae             #+#    #+#             */
/*   Updated: 2023/09/06 10:00:53 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s, char *c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && c[i] != '\0' && s[i] == c[i])
		i++;
	return (s[i] - c[i]);
}

void	swap_argv(char **s, char **c)
{
	char	*buffer;

	buffer = *s;
	*s = *c;
	*c = buffer;
}

void	print_argv(char **argv, int argc)
{
	int	i;
	int	y;

	i = 1;
	while (i < argc)
	{
		y = 0;
		while (argv[i][y])
		{
			write(1, &argv[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	last_argv;

	last_argv = argc - 1;
	while (0 < last_argv - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				swap_argv(&argv[i], &argv[i + 1]);
			i++;
		}
		last_argv--;
	}
	print_argv(argv, argc);
	return (0);
}
