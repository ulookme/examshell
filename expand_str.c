/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:53:54 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/27 12:37:49 by chajjar          ###   ########.fr       */
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

void expand_str(char *s)
{
	int i = 0;
	while(s[i] <= ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while(s[i])
	{
		if(s[i] && is_alpha(s[i]) == 0)
			write(1, &s[i++], 1);
		while(s[i] && (s[i] == ' ' || s[i] == '\t'))
		{
			i++;
			if(s[i] && is_space(s[i]))
				write(1, "   ", 1);
		}	

	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		expand_str(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
