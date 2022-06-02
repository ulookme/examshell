/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:09:29 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/17 13:24:14 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int len  = 0;
	int *dup;
	if(start == 0 && end == 0)
		return(0);
	if(end >= start) 
	{
		len = end - start;
		dup = (int *)malloc(sizeof(int) * (len + 1));
		if (!dup)
			return(NULL);
		while(len--)
		{
			dup[len] = start;
			start++;
		}
		return(dup);
	}
	else if(start >= end)
	{
		len = start - end;
		dup = (int *)malloc(sizeof(int) * (len + 1));
		if(!dup)
			return(NULL);
		while( len--)
		{
			dup[len] = start;
			start--;
		}
		return(dup);
	}
	return(NULL);
}


int main()
{
	int i = ;
	int *dup = ft_rrange(1,  3);
	while(0 < i)
	{
		printf("%d", dup[i]);
		i--;
	}
}
