/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:49:14 by dabae             #+#    #+#             */
/*   Updated: 2023/09/02 18:21:24 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ftputchar(char c);

void	print_tab(int **tab)
{
	int	x;
	int	y;

	
	y = 1;
	while (y < 5)
	{	x = 1;
		while (x < 5)
		{
			ftputchar(tab[y][x] + 48);
			if (x != 4)
				ftputchar(' ');
			x++;
		}
		ftputchar('\n');
		y++;
	}
}

