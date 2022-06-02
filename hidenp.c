/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:28:06 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/17 15:38:51 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check(char *s1, char c, int i)
{
	int j = 0;
	while(j < i)
	{
		if(s1[j] == c)
			return(0);
		j++;
	}
	return(1);
}

int hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while(s1[i])
	{
		if(check(s1, s1[i], i))
		{	
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					count++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return(count);	
}

int main(int argc, char **argv)
{
	unsigned int count = 0;
	if(argc == 3)
	{
		count = hidenp(argv[1], argv[2]);
		//printf("%u\n", count);
		if(count == strlen(argv[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
