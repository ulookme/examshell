/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:06:53 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/11 12:58:15 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int res = 0;
	int neg = 1;
	int i = 0;

	while (str[i] <= ' ')
		i++;
	if(str[i] == '+')
		i++;
	else if(str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = res + (str[i] - '0');
		i++;
	}
	return(res *neg);

}

void print_hexa(int n)
{
	char hexa[] = "0123456789abcdef";

	if(n >= 16)
		print_hexa( n/ 16);
	write(1, &hexa[n % 16],1);
}

int main(int argc, char **argv)
{
	int it = 0;
	if (argc == 2)
	{
		it = atoi(argv[1]);
		printf("%d\n", it);
		print_hexa(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return(0);
}
