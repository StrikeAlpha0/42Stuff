/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:17:01 by msharpe           #+#    #+#             */
/*   Updated: 2016/08/30 17:20:11 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int pom;
	int result;

	pom = 1;
	result = 0;
	while (*str != '\0')
	{
		if (str[0] == '-')
		{
			pom = -1;
			str++;
		}
		if (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + (*str - '0');
			str++;
		}
		if (*str <= '0' && *str >= '9')
			str++;
	}
	result = result * pom;
	return (result);
}
