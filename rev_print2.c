/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:04:44 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 18:45:32 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return(i);
}

int main(int argc, char **argv)
{

	if(argc == 2)
	{
		int i = 0;
		//int len = ft_strlen(argv[1]);
		while(argv[1][i])
			i++;
		i--;
		while(i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}

	}
	write(1, "\n", 1);
	return(0);
}
