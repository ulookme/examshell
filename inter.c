/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:54:11 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/12 10:26:05 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int check(char *s1, char c, int i)
{
	int j = 0;
	while (j < i)
	{
		if (c == s1[j])
			return(1);
		j++;
	}
	return(0);
}

void inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i])
	{
		if (check(s1, s1[i], i) == 0)
		{
			j = 0;
			while(s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}	
		}
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}
