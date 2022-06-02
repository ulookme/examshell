/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:58:44 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 14:17:47 by chajjar          ###   ########.fr       */
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
		if(c == s1[j])
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
			if(s1[i] == s2[j])
			{
				if(check(s1, s1[i], i))
				{
					write(1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 3 )
	{
		inter(argv[1], argv[2]);	
	}
	write(1, "\n", 1);
	return(0);
}
