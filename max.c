/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:42:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/11 12:00:01 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int tmp;

	if(!tab)
		return(0);
	tmp = tab[i];
	while(i < len)
	{
		if (tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return(tmp);
}

int main()
{
	int tab[] ={ -1,-2,-9,-4,-5};
	int maxi = max(tab, 5);
	printf("%d",maxi);
}
