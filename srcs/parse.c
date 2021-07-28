/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:03:35 by aldubar           #+#    #+#             */
/*   Updated: 2019/11/14 11:44:14 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_braces(char **av)
{
	int		nb;

	while (**av == ' ')
		(*av)++;
	if (**av == '(')
	{
		(*av)++;
		nb = parse(av);
		if (**av == ')')
			(*av)++;
		return (nb);
	}
	return (ft_atoi(av));
}

int		check_prior(char **av)
{
	int		nb;
	int		nb2;
	char	op;

	nb = check_braces(av);
	while (**av)
	{
		while (**av == ' ')
			(*av)++;
		op = **av;
		if (op != '/' && op != '*' && op != '%')
			return (nb);
		(*av)++;
		nb2 = check_braces(av);
		if (op == '/')
			nb /= nb2;
		else if (op == '*')
			nb *= nb2;
		else
			nb %= nb2;
	}
	return (nb);
}

int		parse(char **av)
{
	int		nb;
	int		nb2;
	char	op;

	nb = check_prior(av);
	while (**av)
	{
		while (**av == ' ')
			(*av)++;
		op = **av;
		if (op != '+' && op != '-')
			return (nb);
		(*av)++;
		nb2 = check_prior(av);
		if (op == '+')
			nb += nb2;
		else
			nb -= nb2;
	}
	return (nb);
}
