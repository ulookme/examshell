/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:49:00 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/29 16:14:48 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unisdt.h>
#include <stdio.h>
#include <stdlib.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if(begin_list == 0)
		return;
	while(begin_list != 0)
	{
		f(begin_list->data);
		begin_list = begin_lits->next;
	}
}
