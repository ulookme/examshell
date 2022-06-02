/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:15:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/15 19:12:30 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void mirror(char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 'N' +  ( 'M'- s[i]);
		else if(s[i] >= 'a' && s[i] <= 'z' )
			s[i] = 'n' + ( 'm' - s[i]);
		write(1, &s[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		mirror(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
