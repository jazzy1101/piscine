/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:42:02 by dabae             #+#    #+#             */
/*   Updated: 2023/09/14 13:05:30 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *s, int n)
{
	int	i = 0;
	while (i < n && s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	**ft_split(char *str)
{
	int	i = 0;
	int	j = 0;
	int	wd = 0;
	int	z = 0;
	char	**res;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wd++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	res = (char **)malloc(sizeof(char *) * (wd + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                        i++;
		j = i;
                while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                        i++;
		if (i > j)
		{
			res[z] = (char *)malloc(sizeof(char) * ((i - j)+ 1));
			if (!wd)
				return (NULL);
			ft_strncpy(res[z], &str[j], i - j);
			z++;
		}
	}
	res[z] = '\0';
	return (res);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i = 0;
	char **strs = ft_split("This is a test");
	(void)ac;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}
