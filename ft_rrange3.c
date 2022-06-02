/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:38:46 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/26 13:01:48 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *tab;
	int len;
	len = (end > start) ? end - start + 1 : start - end + 1;
	if(!(tab = (int *)malloc(sizeof(int) * (len))))
		return(NULL);
	while(len--)
		tab[len] = (end > start ) ? start++ : start--;
	return(tab);
}

int main()
{
	int *tab = ft_rrange(-3, 5);
	int i = 0;
	while(i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
}
