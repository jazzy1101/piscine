/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:58:13 by dabae             #+#    #+#             */
/*   Updated: 2023/09/13 15:23:02 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	word;
	int	z;
	char	**strs;

	if(!str)
		return (NULL);
	i = 0;
	j = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	strs = (char **)malloc(sizeof(char *) * (word + 1));
	if (!strs)
		return (NULL);
	i = 0;
	z = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			strs[z] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			if (!strs[z])
				return (NULL);
			ft_strncpy(strs[z], &str[j], i - j);
			z++;
		}
	}
	strs[z] = '\0';
	return (strs);
}

#include <stdio.h>
int	main()
{
	int		index;
	char	**split;
	
	split = ft_split("This is a test");
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
	return (0);
}
