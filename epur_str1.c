/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 23:07:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/26 00:07:51 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return(0);
	return(1);
}

int is_alpha(char c)
{
	if(c >= 33 && c <= 127)
		return(0);
	return(1);
}

void epur_str(char *s)
{
	int i = 0;
	while(s[i] && is_space(s[i]) == 0)
		i++;
	while(s[i])
	{
		while(s[i] && is_alpha(s[i]) == 0)
			write(1, &s[i++], 1);
		while(s[i] && is_space(s[i]) == 0)
		{
			i++;
			if(s[i] && is_space(s[i]))
				write(1, " ", 1);
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		epur_str(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
