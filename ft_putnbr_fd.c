/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 21:31:11 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/15 20:00:08 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_nbidentifier(long nb2, int fd)
{
	char minus;
	long divider;

	divider = 1;
	if (nb2 == 0)
	{
		minus = 48;
		write(fd, &minus, 1);
	}
	else
	{
		while (nb2 / divider > 0)
			divider *= 10;
	}
	return (divider / 10);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long divider2;
	long number;
	long temp;
	char c;

	c = 0;
	divider2 = 0;
	number = nb;
	if (number < 0)
	{
		c = '-';
		number *= -1;
		write(fd, &c, 1);
	}
	divider2 = ft_nbidentifier(number, fd);
	while (divider2 >= 1)
	{
		temp = number / divider2;
		c = (temp % 10) + 48;
		write(fd, &c, 1);
		divider2 /= 10;
	}
}
