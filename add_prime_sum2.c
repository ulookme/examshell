/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:39:00 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/16 16:36:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	int neg = 1;

	while(str[i] <= ' ')
		i++;
	if(str[i] == '+')
		i++;
	else if(str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = res + (str[i] - 48);
		i++;
	}
	return(res * neg);
}

int is_prime(int nb)
{
	int div = 2;
	while(div <= nb/2)
	{
		if(nb % div == 0)
			return(0);
		div++;
	}
	return(1);
}

void putnbr(int n)
{
	unsigned int nb;
	char c;
	if(n < 0)
	{
		write(1, "-", 1);
		n *= -1;
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
	int n; 
	int sum;
	if(argc == 2)
	{
		n = ft_atoi(argv[1]);
		printf("%d\n", n);
		if(n < 0)
			write(1, "0\n", 1);
		sum = 0;
		while (n > 1)
		{
			if(is_prime(n))
				sum += n;
			n--;
		}
		putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 1);
	return(0);
}	
