/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:54:34 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/01 17:04:40 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void rev_print(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	while(i--)
		write(1, &s[i], 1);
}


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		rev_print(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
