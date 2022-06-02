/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:48:15 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/17 12:05:12 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n' )
		return(0);
	return(1);
}

int iss_alpha(char c)
{
	if(c >= 33 && c <= 127)
		return(0);
	return(1);
}

void epur_str(char *s)
{
	int i = 0;
	while(s[i] && is_space(s[i]) == 0)
		i++;
	while(s[i])
	{
		if(iss_alpha(s[i]) == 0 && s[i])
			write(1, &s[i++], 1);
		while(s[i] && is_space(s[i]) == 0)
		{
			i++;
			if(s[i] && is_space(s[i]))
				write(1, " ", 1);
		}

	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		epur_str(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
