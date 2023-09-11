/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:29:17 by dabae             #+#    #+#             */
/*   Updated: 2023/09/10 19:05:59 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_read_dict(char *dictionary)
{
	int		fd;
	char	*buf;

	buf = (char *)malloc(2000 * sizeof(char));
	fd = open(dictionary, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Read error\n");
		return (0);
	}
	read(fd, buf, 1000);
	close(fd);
	return (buf);
}

int		ft_counter_rows(char *buf)
{
	int		j;
	int		rows;

	j = 0;
	rows = 0;
	while (buf[j])
	{
		if (buf[j++] == '\n')
			rows++;
	}
	return (rows);
}

char    *ft_rm_space(char *str)
{
        char *result = (char *)malloc(ft_strlen(str) + 1);
        int     i;
        int     j;

        i = 0;
        while (str[i])
        {
                j = 0;
                if ((str[i] >= '0' && str[i] <= '9') && str[i + 1] == ' ')
                        result[j++] = str[i];
                else if (str[i] != ' ' || (i > 0 && str[i - 1] != ' '))
                        result[j++] = str[i];
                i++;
        }
        result[j] = '\0';
        return result;
}

char	**ft_alloc_array(char *buf)
{
	char	**array;
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = 0;
	array = (char **)malloc(ft_counter_rows(buf) * sizeof(char *));
	while (i < ft_counter_rows(buf))
	{
		counter = 0;
		while (buf[j] != '\n')
		{
			counter++;
			j++;
		}
		j++;
		array[i++] = (char *)malloc((counter + 1) * sizeof(char));
	}
	return (array);
}

char	**ft_copy_dict_array(char *dictionary)
{
	int		i;
	int		j;
	int		k;
	char	*buf;
	char	**array;

	buf = ft_strdup(ft_read_dict(dictionary));
	buf = ft_rm_space(buf);
	i = 0;
	j = 0;
	array = ft_alloc_array(buf);
	while (i < ft_counter_rows(buf))
	{
		k = 0;
		while (buf[j] != '\n')
			array[i][k++] = buf[j++];
		array[i][k] = '\0';
		j++;
		i++;
	}
	free(buf);
	return (array);
}

