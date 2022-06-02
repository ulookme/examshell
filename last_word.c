/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:24:34 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/15 13:02:11 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
	int i = 0;
	int len = 0 ;
	if(argc == 2)
	{
		while( argv[1][i] != '\0' )
		{
			if(argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 127)
			{
				len =  i + 1;
			}
			i++;
		}
		while(argv[1][len] >= 33 && argv[1][len] <= 127)
		{
			write(1, &argv[1][len], 1);
			len++;
		}

	}
	write(1, "\n", 1);
	return(0);
}
