/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:12:13 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/12 14:38:29 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void rstr_capitalizer(char * s)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		while(s[i] <= ' ')
			i++;
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -=32;
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		//write(1, &s[i], 1);
		i++;	
	}
	while(s[j])
	{
		if(s[j - 1] >= 'a' && s[j - 1] <= 'z' && s[j + 1] == ' ')
			s[j] -= 32;
		if(s[j + 1] == ' ' && s[j - 1] == ' ')
			s[j] -= 32;
		write(1, &s[j], 1);
		j++;
	}

}


int main (int argc, char **argv)
{
	int i = 1;
	while(i < argc)
	{
		rstr_capitalizer(argv[i]);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
