/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:17:28 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/01 17:56:22 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int check(char *s, char c, int i)
{
	int j = 0;
	while(j < i)
	{
		if(s[j] == c)
			return(0);
		j++;
	}
	return(1);
}

void inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(check(s1, s1[i], i))
			{
				write(1, &s1[i], 1);
				break;
			}
			j++;
		}
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
