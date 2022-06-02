/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:02:17 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/24 23:16:21 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void firts_word(char *s)
{
	int i = 0;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while(s[i] >= 33 && (s[i + 1] != ' ' || s[i + 1] != '\t' || s[i + 1] != '\0') )
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		firts_word(argv[1]);
	}
	write(1, "\n", 1);
	
}
