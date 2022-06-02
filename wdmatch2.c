/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:07:34 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/16 10:33:42 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void putstr(char *s)
{
	write(1, s, strlen(s));
}

int wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				count++;
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	return(count);
}


int main(int argc, char **argv)
{
	size_t count = 0;
	if(argc == 3)
	{
		count = wdmatch(argv[1], argv[2]);
		if(count == strlen(argv[1]))
			putstr(argv[1]);
		write(1, "\n", 1);
	}
	if(argc != 3)
		write(1, "\n", 1);
	return(0);
}
