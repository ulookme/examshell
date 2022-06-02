/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:34:58 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/30 16:04:35 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int is_space(char c)
{
	return((c == ' ' || (c >= 9 && c <= 13)) ? 1 : 0);
}

int r_size(char *str)
{
	int i = 0;
	int len = 0;
	while(str[i])
	{
		if(is_space(str[i]))
			i++;
		else
		{
			len++;
			while(str[i] && !is_space(str[i]))
				i++;
		}
	}
	return(len);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	char **dup;
	if(!(dup = (char **)malloc(sizeof(char*) * (r_size(str) + 1))))
		return(0);
	while(str[i] && j < r_size(str))
	{
		while(str[i] && is_space(str[i]))
			i++;
		while(str[i] && !is_space(str[i]))
		{
			len++;
			i++;
		}
		if(!(dup[j]= (char *)malloc(sizeof(char) * (len + 1))))
			return(0);
		k = 0;
		while(len)
			dup[j][k++] = str[i - len--];
		dup[j++][k] = '\0';
	}
	return(dup);
}

int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split(" un deux trois quatre cinq six sept huit neuf");
	while (i < 10)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
