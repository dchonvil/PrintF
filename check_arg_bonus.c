/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:19:55 by dchonvil          #+#    #+#             */
/*   Updated: 2021/08/13 20:20:56 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

void	del_space(const char *print, char *l, int *c, int *i)
{
	ft_putchar_spe(' ', i);
	while (print[*c] == ' ')
		*c += 1;
	*l = print[*c];
	if (*l == '.' || *l == '-' || *l == '+' || *l == '0' || *l == '#')
		*c += 1;
}

void	get_buffer(const char *print, int *c, int *j)
{
	char	*box;

	box = malloc((sizeof(char)) * (*j + 1));
	if (!box)
		return ;
	*c -= *j;
	*j = 0;
	while (ft_isdigit(print[*c]))
	{
		box[*j] = print[*c];
		*c += 1;
		*j += 1;
	}
	box[*j] = '\0';
	*j = ft_atoi(box);
	free(box);
}

void	check_spe_arg(const char *print, va_list args, int *c, int *i)
{
	int		j;
	char	l;
	char	*tmp;

	j = 0;
	l = print[*c + 1];
	*c += 2;
	if (l == ' ')
		del_space(print, &l, c, i);
	while (ft_isdigit(print[*c]))
	{
		j++;
		*c += 1;
	}
	if (j > 0)
		get_buffer(print, c, &j);
	tmp = check_arg_bonus(print, args, c);
	if (tmp != NULL)
		treat_arg(tmp, l, i, j);
	*c -= 1;
	free(tmp);
}
