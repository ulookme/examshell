/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:29:35 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/25 16:02:22 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void putstr(char *str)
{
	write(1, str, strlen(str));
}

int wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				count++;
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	return(count);

}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		size_t count = wdmatch(argv[1], argv[2]);
		if(count == strlen(argv[1]))
			putstr(argv[1]);
			
	}
	write(1, "\n", 1);
	return(0);
}
