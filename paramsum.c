/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:47:42 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/27 23:01:56 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
	int res = 0;
	int i = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		res *= 10;
		res = res + (s[i] - 48);
		i++;
	}
	return(res);
}

void putnbr(int n)
{
	if(n > 10)
		putnbr(n / 10);
	char c = (n % 10) + 48;
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		putnbr(argc -1);
	}
	write(1, "\n", 1);
	return(0);
}
