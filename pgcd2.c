/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:50:25 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/26 16:12:37 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int res = 0;
	int i = 0;
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10;
		res = res + (s[i] - '0');
		i++;
	}
	return(res);
}

void putnbr(int n)
{
	if(n >= 10)
		putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int pgcd(int a, int b)
{
	if(a == b)
		return(a);
	if(a > b)
		return(pgcd(a - b, b));
	else
		return(pgcd(a, b - a));
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int n;
		n = pgcd(ft_atoi(argv[1]), ft_atoi(argv[2]));
		putnbr(n);
	}
	write(1, "\n", 1);
	return(0);
}
