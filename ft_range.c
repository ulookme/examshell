/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:44:19 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/27 22:47:09 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len;
	int *tab;

	if(start == 0 || end == 0)
		return(0);
	len = end - start + 1;
	if(!(tab = (int *)malloc(sizeof(int) * (len))))
		return(NULL);
	while(start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return(tab);
}

int main()
{
	int *tab;
	int min = -1;
	int max = 2;

	tab = ft_range(min, max);
	int i = 0;
	while(i <= max)
	{
		printf("%d",tab[i]);
		i++;
	}
}
