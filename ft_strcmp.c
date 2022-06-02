/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:38:17 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/16 11:04:50 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] && s2[i])
	{
		if(s1[i] == s2[i])
			i++;
	}
	return(s1[i]- s2[i]);

}

int main()
{
	char *s1 = "je suis";
	char *s2 = "je suis";
	int i = ft_strcmp(s1, s2);
	printf("%d\n", i);
}
