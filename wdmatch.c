/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:18:38 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/15 20:32:50 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_putstr(char *str)
{
	write(1, str, strlen(str));
}


int  wmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while(s1[i])
	{
		j = 0;
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
		count = wmatch(argv[1], argv[2]);
		if (count == strlen(argv[1]))
			ft_putstr(argv[1]);
		write(1, "\n", 1);

	}
	return(0);
}
