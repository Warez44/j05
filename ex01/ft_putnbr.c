/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:35:23 by clingier          #+#    #+#             */
/*   Updated: 2018/08/17 10:53:07 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char t);

void	ft_putnbr(int i)
{
	long temp;

	temp = i;
	if (temp < 0)
	{
		ft_putchar('-');
		temp = temp * -1;
	}
	if (temp >= 10)
		ft_putnbr(temp / 10);
	ft_putchar((temp % 10) + '0');
}
