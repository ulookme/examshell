/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitaliser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:05:01 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/26 19:38:53 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_alpha(char c)
{
	if(c >= 33 && c <= 127)
		return(0);
	return(1);
}

int is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n' )
		return(0);
	return(1);
}

void rstr_capitaliser(char *s)
{
	int i = 0;
	while(s[i] && is_space(s[i]) == 0)
		i++;
	while(s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
	i = 0;
	while(s[i])
	{
		if(s[i] >= 'a' && s[i] <= 'z' && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0'))
			s[i] = s[i] - 32;
		write(1, &s[i], 1);
		i++;
	}

}

int main(int argc, char **argv)
{
	int i = 1;
	if(argc == 1)
		write(1, "\n",1);
	else
	{	
		while(i < argc)	
		{
			rstr_capitaliser(argv[i]);
			i++;
		}
	}
	return(0);
}
