/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:15:21 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/15 15:18:45 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_bits(unsigned char octet)
{
	int i = 256;
	while(i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
