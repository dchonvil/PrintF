/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:43:50 by dchonvil          #+#    #+#             */
/*   Updated: 2021/08/13 20:32:36 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

void	exec_arg_zero(char *box, int *i, int c, int j)
{
	if (j > c)
	{
		j -= c;
		while (j > 0)
		{
			ft_putchar_spe('0', i);
			j--;
		}
	}
	ft_putstr_spe(box, i);
}

void	exec_arg_bar(char *box, int *i, int c, int j)
{
	ft_putstr_spe(box, i);
	if (j > c)
	{
		while (j > c)
		{
			ft_putchar_spe(' ', i);
			j--;
		}
	}
}

void	exec_arg_dot(char *box, int *i, int c, int j)
{
	if (c < j)
	{
		j -= c;
		while (j > 0)
		{
			ft_putchar_spe('0', i);
			j--;
		}
	}
	ft_putstr_spe(box, i);
}

void	exec_arg_tag(char *box, int *i, int c, int j)
{
	c = 0;
	j = 0;
	while (box[j] != '\0')
	{
		if (box[j] > 64 && box[j] < 91)
			c = 1;
		j++;
	}
	if (c == 1)
		ft_putstr_spe("0X", i);
	else
		ft_putstr_spe("0x", i);
	ft_putstr_spe(box, i);
}

void	treat_arg(char *box, char l, int *i, int j)
{
	int	c;

	c = ft_count(box);
	if (l == '0')
		exec_arg_zero(box, i, c, j);
	else if (l == '-')
		exec_arg_bar(box, i, c, j);
	else if (l == '.')
		exec_arg_dot(box, i, c, j);
	else if (l == '#')
		exec_arg_tag(box, i, c, j);
	else if (l == '+')
	{
		if (ft_atoi(box) > 0)
			ft_putchar_spe('+', i);
		ft_putstr_spe(box, i);
	}
	else
		ft_putstr_spe(box, i);
}
