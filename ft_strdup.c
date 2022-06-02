/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:45:25 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 17:26:56 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *dup;
	while(src[i])
		i++;
	if(!(dup = (char *)malloc(sizeof(char) * (i + 1))))
		return(NULL);
	i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}

int main()
{
	char *src = "je suis le teste";
	char *dup = ft_strdup(src);
	printf("%s\n", dup);
}
