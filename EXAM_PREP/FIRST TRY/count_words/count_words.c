/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:44:12 by dabae             #+#    #+#             */
/*   Updated: 2023/09/12 12:17:56 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_words(char *str)
{
	int	i;
	int 	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	return (words);
}
/*
#include <stdio.h>

int	main()
{
	char	s[] = "    ter    wer?";
	printf("%d", count_words(s));
	return (0);
}
*/
