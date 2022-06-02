/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_132.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:25:42 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 15:42:08 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **av)
{
	int i = 0;
	if(argc == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'M')
				av[1][i] += 13;
			else if (av[1][i] >= 'N' && av[1][i] < 'Z')
				av[1][i] -= 13;
			else if (av[1][i] >= 'a' && av[1][i] <= 'm')
				av[1][i] += 13;
			else if (av[1][i] >= 'n' && av[1][i] < 'z')
				av[1][i] -= 13;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
