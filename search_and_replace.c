/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:14:37 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/13 15:20:21 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void search(char *s, char c, char r)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			s[i] = r;
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argv[2][0 + 1] == '\0' && argv[3][0 + 1] == '\0' && argc == 4)
		search(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return(0);
}
