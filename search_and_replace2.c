/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:49:54 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 22:17:57 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		int i = 0;

		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return(0);
}
