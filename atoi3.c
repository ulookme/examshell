/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:19:34 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 23:33:22 by chajjar          ###   ########.fr       */
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
		res = res + (str[i] - 48);
		i++;
	}
	return(res * neg);
}

int main()
{
	const char *str = "-12345";
	int nb = ft_atoi(str);
	printf("%d", nb);
}
