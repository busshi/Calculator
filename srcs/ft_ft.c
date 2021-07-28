/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:15:55 by aldubar           #+#    #+#             */
/*   Updated: 2019/11/14 11:18:27 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		ft_atoi(char **av)
{
	int		res;

	res = 0;
	while (**av >= '0' && **av <= '9')
	{
		res = res * 10 + (**av - '0');
		(*av)++;
	}
	return (res);
}
