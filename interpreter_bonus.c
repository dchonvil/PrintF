/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:16:03 by dchonvil          #+#    #+#             */
/*   Updated: 2021/08/13 22:43:45 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

char	*check_char_spe(const char *print, va_list args, int c)
{
	int		n;
	char	*box;

	n = '\0';
	if (print[c] == 'c')
	{
		box = malloc((sizeof(char)) * 2);
		if (!box)
			return (box);
		n = va_arg(args, int);
		box[0] = n;
		box[1] = '\0';
	}
	else if (print[c] == 's')
		box = ft_getstr(va_arg(args, char *));
	else
		box = NULL;
	return (box);
}

char	*check_nbr_spe(const char *print, va_list args, int c)
{
	char	*box;

	if (print[c] == 'd' || print[c] == 'i')
		box = ft_getnbr(va_arg(args, int));
	else if (print[c] == 'u')
		box = ft_get_unsigned_nbr(va_arg(args, unsigned int));
	else
		box = NULL;
	return (box);
}

void	ft_rev_tab(char *box, int n)
{
	int		c;
	char	*tmp;

	c = 0;
	tmp = malloc(sizeof(char) * (n + 1));
	if (!tmp)
		return ;
	ft_strlcpy(tmp, box, n + 1);
	while (n > 0)
	{
		n--;
		box[c] = tmp[n];
		c++;
	}
	box[c] = '\0';
	free(tmp);
}

void	filler_spe(char *box, char type, long long int nb)
{
	int			n;
	char const	*base;

	if (type == 'x' || type == 'p')
		base = "0123456789abcdef";
	else if (type == 'X')
		base = "0123456789ABCDEF";
	n = 0;
	while ((nb / 16) > 0)
	{
		box[n] = base[(nb % 16)];
		nb /= 16;
		n++;
	}
	box[n] = base[(nb % 16)];
	if (type == 'p')
	{
		box[n + 1] = 'x';
		box[n + 2] = '0';
		box[n + 3] = '\0';
	}
	else
		box[n + 1] = '\0';
	n = ft_count(box);
	ft_rev_tab(box, n);
}

char	*put_hexa_spe(const char *print, va_list args, int c)
{
	int				n;
	char			*box;
	long long int	nb;
	long long int	check;

	if (print[c] == 'p')
		nb = (unsigned long long int)va_arg(args, void *);
	else
		nb = (long long int)va_arg(args, int);
	n = 0;
	if (nb < 0)
		nb = 4294967295 - ((nb * -1) - 1);
	check = nb;
	while ((check / 16) > 0)
	{
		check /= 16;
		n++;
	}
	if (print[c] == 'p')
		n += 2;
	box = malloc(sizeof(char) * (n + 3));
	if (!box)
		return (NULL);
	filler_spe(box, print[c], nb);
	return (box);
}
