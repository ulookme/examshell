/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:53:22 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 17:24:44 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return(res);
}

void putnbr(int n)
{
	if(n >= 10)
		putnbr(n / 10);
	char c = (n % 10 ) + 48;
	write(1, &c, 1);
}

int is_prime(int n)
{
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return(0);
		++i;
	}
	return(1);
}

int add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;
	while(i <= n)
	{
		if(is_prime(i) == 1)
			sum += i;
		i++;
	}
	return(sum);
}


int main(int argc, char **argv)
{
	int n;
	if(argc == 2 && (n = ft_atoi(argv[1])))
		putnbr(add_prime_sum(n));
	else
		putnbr(0);
	write(1, "\n", 1);
	return(0);
}
