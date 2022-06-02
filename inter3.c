/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:41:57 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 00:15:58 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int check(char *s1, char c, int i)
{
	int j = 0;
	while(j < i)
	{
		if(s1[i] == c)
			return(1);
		j++;
	}
	return(0);
}

void inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int tab[256];
	while(i < 256)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while(s1[i])
	{
		j = 0;
		if (tab[(int) s1[i]])
		{
			i++;
			continue;
		}
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		tab[(int) s1[i]] = 1;
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}
