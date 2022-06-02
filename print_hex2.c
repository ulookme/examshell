/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:15:57 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/26 17:03:37 by chajjar          ###   ########.fr       */
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
		res = res * 10;
		res = res + (s[i] - 48);
		i++;
	}
	return(res);
}

void print_hexa(int n)
{
	char hexa[] = "0123456789abcdef";

	if(n >= 16)
		print_hexa(n / 16);
	write(1, &hexa[n % 16], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int n = ft_atoi(argv[1]);
		print_hexa(n);
	}
	write(1, "\n", 1);
	return(0);
}
