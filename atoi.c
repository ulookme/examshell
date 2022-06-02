/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:06:12 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/01 17:16:06 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int neg = 1;
	
	while(str[i] <= ' ')
		i++;
	if(str[i] == '+')
		i++;
	else if(str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return(res *neg);
}

int main()
{
	const char *str = "-123";
	int n = ft_atoi(str);
	printf("%d\n", n);
	return(0);
}
