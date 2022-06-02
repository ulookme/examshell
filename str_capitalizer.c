/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:30:04 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/12 13:07:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



void str_capitalizer(char *s)
{
	int i = 0;
	int j = 0;
	while(s[i] <= ' ')
		i++;
	while(s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		if(s[i] >= 'A' && s[i] <= 'Z' )
			s[i] = s[i] + 32;
		i++;
	}
	j = 0;
	while(s[j])
	{
		if(s[j - 1] == ' ' && s[j + 1] >= 'a'  && s[j + 1] <= 'z')
			s[j] = s[j] -32;
		write(1, &s[j], 1);
		j++;
	}
	
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		str_capitalizer(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
