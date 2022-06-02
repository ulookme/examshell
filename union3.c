/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:13:17 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/01 20:28:07 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void uni(char *s1, char *s2)
{
	int i = 0;
	int tab[256];
	while(i < 256)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while(s1[i])
	{
		if(tab[(int)s1[i]] == 0)
			write(1, &s1[i], 1);
		tab[(int)s1[i]] = 1;
		i++;
	}
	i = 0;
	while(s2[i])
	{
		if(tab[(int)s2[i]] == 0)
			write(1, &s2[i], 1);
		tab[(int)s2[i]] = 1;
		i++;
	}
}


int main(int argc, char **argv)
{
	if(argc == 3)
	{
		uni(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}
