/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:29:27 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/17 17:36:10 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_atoi(char *s)
{
	int neg = 1;
	int res = 0;
	int i = 0;

	while(s[i] <= ' ')
		i++;
	if(s[i] == '+')
		i++;
	else if(s[i] == '-')
		neg *= -1;
	while(s[i] >= '0' && s[i] <= '9')
	{
		res *= 10;
		res = res + (s[i] - 48);
		i++;
	}
	return(res * neg);
}

int pgcd(int a , int b)
{
	if(a == b)
		return(a);
	if(a > b)
		return(pgcd(a - b, b));
	else
		return(pgcd(a, b - a));
}

void putnbr(int n)
{
	unsigned int nb;
	char c;

	if(n == 0)
		write(1, "0", 1);
	if(n < 0)
	{
		write(1, "-", 1);
		n *= -n;
	}
	nb = n;
	if(nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
}



int main(int argc, char **argv)
{
	int a;
	int b;
	int res;

	if(argc == 3)
	{
		a = ft_atoi(argv[1]);
		//printf("%d\n",a);
		b = ft_atoi(argv[2]);
		//printf("%d\n",b);
		res = pgcd(a, b);
		putnbr(res);
	}
	write(1, "\n", 1);
	return(0);
}
