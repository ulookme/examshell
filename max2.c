/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:31:39 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 13:56:04 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int j = 0;
	j = tab[i];
	while(i < len)
	{
		if(j < tab[i])
			j  = tab[i];
		i++;
	}
	return(j);
}


int main()
{
	int tab[] = {10, 50, 5, 11, 130, 70};
	int maxi = max(tab, 6);
	printf("%d", maxi);
}
