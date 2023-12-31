/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:32:52 by dabae             #+#    #+#             */
/*   Updated: 2023/09/10 16:23:56 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!(ft_error(argc, argv[1])))
			return (0);
		ft_engine("numbers.dict", argv[1]);
	}
	else if (argc == 3)
	{
		if (!(ft_error(argc, argv[2])))
			return (0);
		ft_engine(argv[1], argv[2]);
	}
	if (argc != 2 && argc != 3)
	{
		ft_puterror("ERROR!\n");
		return (0);
	}
}

