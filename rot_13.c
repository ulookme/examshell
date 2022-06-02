/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:32:27 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/12 09:52:27 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = argv[1][i]+ 13;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = argv[1][i] - 13;
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] = argv[1][i] + 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			write(1, &argv[1][i] , 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
