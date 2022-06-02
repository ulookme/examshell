/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:13:36 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/30 14:16:02 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	ft_isspace(char c)
{
	return ((c == ' ' || (c >= 9 && c <= 13)) ? 1 : 0);
}

static int	r_size(char *s)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		if (ft_isspace(*s))
			++s;
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
				++s;
		}
	}
	return (len);
}

char 		**ft_split(char *s)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**r;
	int		w_len = 0;

	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s) + 1))))
		return (0);
	while (s[i] && j < r_size(s))
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (s[i] && !ft_isspace(s[i]))
		{
			w_len++;
			i++;
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (0);
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	return (r);
}

int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split("un deux trois quatre cinq six sept huit neuf");
	while (i < 10)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
