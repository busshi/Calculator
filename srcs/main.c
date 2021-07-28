/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:32:21 by aldubar           #+#    #+#             */
/*   Updated: 2019/11/10 22:34:57 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		eval_expr(char *str)
{
	return (parse(&str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
