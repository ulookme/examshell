/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:09:50 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 13:30:20 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i]= '\0';
	return(s1);
}

int main()
{
	char s1[100] = "test a";
	char s2[100] = "coller";
	char *s3 = ft_strcpy(s1, s2);
	printf("%s\n",s3 );
	
}
