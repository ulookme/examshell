/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:12:09 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/26 15:39:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i])
	{
		while(s2[j] == s1[i] && s2[j])
		{
			if(s2[j] != '\0')
			{
				write(1, "0", 1);
				return;;
			}
			j++;
		}
		i++;
	}
	write(1, "1", 1);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		hidenp(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}
