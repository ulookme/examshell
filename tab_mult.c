/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:38:17 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/27 15:12:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int i = 0;
	int res = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10;
		res = res + s[i] - '0';
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

void  tab_mult(char *s)
{
	int i = 1;
	int n = ft_atoi(s);
	while(i <= 9)
	{
		putnbr(i);
		write(1,  " x ", 3);
		putnbr(n);
		write(1, " = ", 3);
		putnbr(i * n);
		write(1, "\n", 1);
		++i;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int n = ft_atoi(argv[1]);
		printf("%d", n);
		tab_mult(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
