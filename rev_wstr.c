/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:03:27 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/30 21:19:17 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void rev_wstr(char *str)
{
	int i = 0;
	int j;
	int first_word = 1;

	while(str[i] != '\0')
		i++;
	while(i >= 0)
	{
		while(i >= 0 && (str[i] == ' ' || str[i] == '\0' || str[i] == '\t'))
			i--;
		j = i;
		while(j >= 0 && (str[j] != ' ' && str[j] != '\t'))
			j--;
		if(first_word == 0)
			write(1, " ", 1);
		write(1, str + j + 1, i - j);
		first_word = 0;
		i = j;
	}
}


int main(int argc, char **argv)
{
	if(argc == 2)
		rev_wstr(argv[1]);

	write(1, "\n", 1);
	return(0);
}
