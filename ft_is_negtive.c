/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negtive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 02:19:19 by msharpe           #+#    #+#             */
/*   Updated: 2016/08/22 02:29:04 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_putchar (char c);

int ft_is_negative (int n)
{
	int P;
	int N;
	int Z;

	if(n > '0')
		ft_putchar('P');
	else if(n < '0')
		ft_putchar('N');
	else
		ft_putchar('Z');
	return (0);
}

