/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:56:50 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/31 23:13:51 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int absolute_value(int n)
{
	if(n < 0)
		return(-n);
	return(n);
}

int get_len(int n)
{
	int len = 0;
	if(n < 0)
		len++;
	while(n != 0)
	{
		len++;
		n = n / 10;
	}
	return(len);
}

char *ft_itoa(int n)
{
	int len = get_len(n);
	char *res;
	if(!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return(NULL);
	res[len] = '\0';
	if(n < 0)
		res[0] = '-';
	else if(n == 0)
		res[0] = '0';
	while(n != 0)
	{
		len--;
		res[len] = absolute_value(n % 10) + '0';
		n = n / 10;
	}
	return(res);
}


int main(void)
{
	int d = 0;
	char *str = ft_itoa(d);
	printf(" %d en int et %s avec itoa", d, str);
}
