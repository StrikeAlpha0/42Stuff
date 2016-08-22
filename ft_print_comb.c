/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 02:35:52 by msharpe           #+#    #+#             */
/*   Updated: 2016/08/22 02:52:05 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_putchar (char c);

void ft_print_comb(void);
{
	int a;
	int b;
	int c;

	int a = '0';
	int b = '1';
	int c = '2';

	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				if( a != b && b != c && a != c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return(0);
}

