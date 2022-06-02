/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_133.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:37:00 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 22:59:47 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = argv[1][i] + 13;
			else if(argv[1][i] >= 'N' && argv[1][i] < 'Z')
				argv[1][i] = argv[1][i] - 13;
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] = argv[1][i] + 13;
			else if(argv[1][i] >= 'n' && argv[1][i] < 'z')
				argv[1][i] = argv[1][i] - 13;
			else if(argv[1][i] == 'Z')
				argv[1][i] = 77;
			else if(argv[1][i] == 'z')
				argv[1][i] = 119;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
