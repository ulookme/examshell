/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:22:13 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/30 14:18:47 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_space(char c)
{
	return((c == ' ' ||( c >= 9 && c <= 11)) ? 1 : 0);
}

static int r_size(char *s)
{
	int len = 0;
	int i = 0;
	while(s[i])
	{
		if(is_space(s[i]))
			++i;
		else
		{
			++len;
			while(s[i] && !is_space(s[i]))
				i++;
		}
	}
	return(len);
}

char **ft_split(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **str;
	int len = 0;
	if(!(str = (char **)malloc(sizeof(char *) * (r_size(s) + 1))))
			return(0);
	while(s[i] && j < r_size(s))
	{
		while(is_space(s[i]))
			++i;
		while(s[i] && !is_space(s[i]))
		{
			len++;
			i++;
		}
		if(!(str[j] = (char *)malloc(sizeof(char) * (len + 1))))
			return(0);
		k = 0;
		while(len)
			str[j][k++] = s[i - len--];
		str[j++][k] = '\0';
	}
	return(str);
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

