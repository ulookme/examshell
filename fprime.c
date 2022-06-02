/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:35:39 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/28 17:56:03 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_prime(int n)
{
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}

void fprime(char *str)
{
	int factor = 2;
	int firts = 1;
	int n = atoi(str);
	if(n == 1)
		printf("1");
	while(factor <= n)
	{
		if(n % factor == 0 && is_prime(factor))
		{
			if(firts == 1)
				printf("%d", factor);
			else
				printf("*%d", factor);
			firts = 0;
			n = n / factor;
		}
		else
			factor++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		fprime(argv[1]);

	printf("\n");
	return(0);
}
