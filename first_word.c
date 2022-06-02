/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:43:05 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 16:18:13 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void firt(char *s)
{
	int i = 0;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' )
		i++;
	while(s[i] != ' ' &&  s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		firt(argv[1]);
	}
	write(1, "\n", 1);
	return(0);	
}
