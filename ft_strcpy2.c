/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:23:35 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 16:46:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return(i);
}

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int len = ft_strlen(s2);
	if(!s2)
		return(NULL);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	while(i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main()
{
	char *s1 = "test";
	char *s3 ;
	char *s2 = "je suis la";
	s3 = ft_strcpy(s1, s2);
	printf("%s", s3);
}
