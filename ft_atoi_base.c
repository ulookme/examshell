/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:18:51 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/27 20:36:56 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char to_lower(char c)
{
	if(c >= 'A' && c <= 'Z')
		return(c = c + 32);
	return(c);
}

int get_digit(char c, int digit_base)
{
	int max_digit;
	if(digit_base <= 10)
		max_digit = digit_base + '0';
	else
		max_digit = digit_base - 10 + 'a';
	if(c >= '0' && c <= '9' && c <= max_digit)
		return(c - '0');
	else if(c >= 'a' && c <= 'f' && c <= max_digit)
		return(10 + c - 'a');
	else
		return(-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int neg = 1;
	int digit;
	int i = 0;
	if( str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}

	while((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * neg);
		i++;
	}
	return(res);
}

int main(void)
{
	printf("%d", ft_atoi_base("10B80a", 13));
}
