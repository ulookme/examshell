/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:30:20 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 16:49:26 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *ft_strrev(char *str)
{
	int i = 0;
	int len = strlen(str);
	int tmp;
	len--;
	while(len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}

int main()
{
	char str[] = "je print avec retour";
	printf("%s", ft_strrev(str));
}
