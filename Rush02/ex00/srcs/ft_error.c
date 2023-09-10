/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:28:20 by dabae             #+#    #+#             */
/*   Updated: 2023/09/10 17:28:33 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_error(int argc, char *str)
{
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (!(ft_is_number(str)))
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (ft_strlen(str) > 37)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	return (1);
}

