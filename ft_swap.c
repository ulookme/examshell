/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:28:22 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/11 11:36:02 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

int main()
{
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
}
