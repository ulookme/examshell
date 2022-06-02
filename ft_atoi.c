/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:30:39 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 16:44:31 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int neg = 1;
	int res = 0;
	int i = 0;

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
		res = res + (str[i] - 48);
		i++;
	}
	return(res * neg);
}

int main()
{
	const char *str = "-12345";
	int nb = ft_atoi(str);
	printf("%d\n", nb);
	return(0);
}
