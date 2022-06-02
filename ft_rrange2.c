/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:24:25 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/17 14:23:00 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int *ft_rrange(int start, int end)
{
	int len = 0;
	int *dup;
	len = (end > start) ? end - start + 1 : start -end + 1;
	if(!(dup = (int *)malloc(sizeof(int) * (len))))
		return(NULL);
	while(len--)
		dup[len] = (end > start) ? start++ : start--;
	return(dup);

}

int main()
{
	int i = 0;
	int *tab = ft_rrange(1, 3);
	while(i < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
}
