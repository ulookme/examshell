/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:58:01 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 14:13:55 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void rev(char *s)
{
	int len = 0;
	while (s[len])
		len++;
	while(len--)
		write(1, &s[len], 1);
}


int main(int argc, char **argv)
{

	if (argc == 2)
	{
		rev(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
