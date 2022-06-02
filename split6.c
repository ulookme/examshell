/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:29:44 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/01 15:49:37 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_space(char c)
{
	if(c == ' ' || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int r_size(char *s)
{
	int len = 0;
	int i = 0;
	while(s[i])
	{
		if(is_space(s[i]))
			i++;
		else
		{
			len++;
			while(s[i] && !is_space(s[i]))
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
	char **dup ;
	if(!(dup = (char **)malloc(sizeof(char *) * (r_size(str) + 1))))
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
		if(!(dup[j] = (char *)malloc(sizeof(char) * (len + 1))))
			return(0);
		k = 0;
		while(len)
			dup[j][k++] = str[i - len--];
		dup[j++][k] = '\0';
	}
	return(dup);
}

int main()
{
	int i = 0;
	char **tab;
	tab = ft_split("un deux trois quatre cinq");
	while(i < 5)
	{
		printf("sting %d : %s\n", i , tab[i]);
		i++;
	}
	return(0);
}
