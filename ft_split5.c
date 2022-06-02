/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:11:44 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/30 16:28:03 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_space(char c)
{
	return((c == ' ' || (c >=  9 && c <= 13)) ? 1 : 0);
}

static int r_size(char *s)
{
	int i = 0;
	int len = 0;
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

char **ft_split(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	char **str;
	if(!(str = (char **)malloc(sizeof(char *) * (r_size(s) + 1))))
		return(0);
	while(s[i] && j < r_size(s))
	{
		while(s[i] && is_space(s[i]))
			i++;
		while(s[i] && !is_space(s[i]))
		{
			len++;
			i++;
		}

		if(!(str[j] = (char *)malloc(sizeof(char) * (len +1))))
			return(0);
		k = 0;
		while(len)
			str[j][k++] = s[i - len--];
		str[j++][k] = '\0';
	}
	return(str);
}


int main()
{
	char**tab;
	int i = 0;
	tab = ft_split("bonjour je suis la");
	while (i < 5)
	{
		printf("splite %d = %s\n",i ,tab[i]);
			i++;
	}
	return(0);
}
