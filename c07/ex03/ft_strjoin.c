/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:45:30 by dabae             #+#    #+#             */
/*   Updated: 2023/09/06 08:16:22 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	whole_length(char **strs, char *sep, int size)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int	i;
	int	j;
	int	whole_size;

	whole_size = whole_length(strs, sep, size);
	str = (char *)malloc((whole_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (size == 0)
	{
		str[0] = '\0';
		return (str);
	}
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, "--"));
	return (0);
}
*/
