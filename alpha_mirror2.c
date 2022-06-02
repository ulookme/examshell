/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:16:57 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 13:30:13 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void alpha_m(char *s)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'M')
			s[i] = 'N' + (s[i] - 'M');
		else if(s[i] >= 'N' && s[i] <= 'Z')
			s[i] = 'M' - (s[i] + 'N');
		else if(s[i] >= 'a' && s[i] <= 'm' )
			s[i] = 'n' + (s[i] - 'm');
		else if(s[i] >= 'n' && s[i] <= 'z')
			s[i] = 'm' - (s[i] + 'n');
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		alpha_m(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
