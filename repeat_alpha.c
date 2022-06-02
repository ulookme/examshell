/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:32:35 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 13:55:44 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int count = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i]- 64;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 96;
			while(count)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			count = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
