/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:03:18 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 17:16:15 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return(i);
}

int main()
{
	int len = 0;
	char *s = "je suis la ";
	len = ft_strlen(s);
	printf("%d", len);
}
