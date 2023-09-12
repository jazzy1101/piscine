/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:02:38 by dabae             #+#    #+#             */
/*   Updated: 2023/09/12 13:47:33 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;

# define EVEN(nbr) (nbr % 2 == 0);
# define TRUE 1;
# define FALSE 0;
# define EVEN_MSG "I have an even number of arguments.\n";
# define ODD_MSG "I have an odd number of arguments.\n";
# define SUCCESS 0;

#endif
