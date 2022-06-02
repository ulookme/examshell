/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:03:03 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/28 14:29:37 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int to_lower(char c)
{
	if(c >= 'A' && c <= 'Z')
		return(0);
	return(1);
}

int is_alpha(char c)
{
	if(c >= 'a' && c <= 'z')
		return(0);
	return(1);
}

void  str_capitalizer(char *s)
{
	int i = 0;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' )
		i++;
	while(s[i])
	{
		if(s[i] && to_lower(s[i]) == 0)
			s[i] = s[i] + 32;
		//write(1, &s[i], 1);
		i++;
	}
	i = 0;

	while(s[i])
	{
		if(s[i] && is_alpha(s[i]) == 0 && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			s[i] = s[i] - 32;
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc != 1)
	{
		int i = 1;
		while(i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
