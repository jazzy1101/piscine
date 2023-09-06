/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:27:55 by dabae             #+#    #+#             */
/*   Updated: 2023/09/01 10:36:56 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int     char_is_in_s2(char *s, char c)
{
        int     j;

        j = 0;
        while (s[j] != '\0')
        {
                if(s[j] == c)
                        return (0);
                j++;
        }
        return (1);
}

int	char_is_in_s1(char *s, char c, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if(s[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	compare_write(char *arg1, char *arg2)
{
	int	i;

	i = 0;
	while(arg1[i] != '\0')
	{
		if(char_is_in_s1(arg1, arg1[i], i))
			write(1, &arg1[i], 1);
		i++;
	}
	i = 0;
	while(arg2[i] != '\0')
	{
		if (char_is_in_s1(arg2, arg2[i], i) && char_is_in_s2(arg1, arg2[i]))
			write(1, &arg2[i], 1);
		i++;
	}
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		compare_write(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
