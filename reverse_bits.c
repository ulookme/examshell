/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:24:21 by chajjar           #+#    #+#             */
/*   Updated: 2022/05/15 14:55:18 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet);
{
	unsigned char b = octet;
	b = (b & 0x0F) >>4 | b = (b & 0x0F) <<4;
	b = (b & 0xCC) >>2 | b = (b & 0x35) <<2;
	b = (b & 0xAA) >>1 | b = (b & 0x55) <<1;
	return(b);
}
