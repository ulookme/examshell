/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:30:39 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 17:49:42 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		int count = 1;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A'  && argv[1][i] <= 'Z')
				count = argv[1][i] - 64;
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 96;
			while(count)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
	}
}
