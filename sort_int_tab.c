/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:00:53 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/31 14:36:52 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}


void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int swapped = 1;
	while(swapped == 1)
	{
		i = 1;
		swapped = 0;
		while(i < size)
		{
			if(tab[i - 1] > tab[i])
			{
				swap(&tab[i - 1], &tab[i]);
				swapped = 1;
			}
			i++;
		}
	}
}

void print_arr(int *tab, unsigned int size)
{
	unsigned int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int tab[] = {5, -4, 3, -2, 1, 0};
	unsigned int size = sizeof(tab) / sizeof(*tab);

	print_arr(tab, size);
	sort_int_tab(tab, size);
	print_arr(tab, size);
}
