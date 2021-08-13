/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:16:20 by dchonvil          #+#    #+#             */
/*   Updated: 2021/08/13 20:41:04 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*ft_getstr(char *str)
{
	int		c;
	char	*box;

	if (!str)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;
	box = malloc((sizeof(char)) * (c + 1));
	if (!box)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
	{
		box[c] = str[c];
		c++;
	}
	box[c] = '\0';
	return (box);
}

void	ft_treat_nbr(char *box, int nb, int *c)
{
	int	n;

	n = 0;
	if (nb < 0)
	{
		nb *= -1;
		box[0] = '-';
		*c += 1;
	}
	if (nb >= 10)
	{
		ft_treat_nbr(box, nb / 10, c);
		ft_treat_nbr(box, nb % 10, c);
	}
	else
	{
		n = nb + '0';
		box[*c] = n;
		*c += 1;
	}
}

char	*ft_getnbr(int nb)
{
	int		c;
	int		m;
	char	*box;

	c = 0;
	m = nb;
	if (nb == -2147483648)
	{
		box = ft_getstr("-2147483648");
		return (box);
	}
	if (nb < 0)
		c++;
	while (m >= 10)
	{
		m = m / 10;
		c++;
	}
	box = malloc((sizeof(char)) * (c + 2));
	if (!box)
		return (NULL);
	c = 0;
	ft_treat_nbr(box, nb, &c);
	box[c] = '\0';
	return (box);
}

void	ft_treat_unsigned_nbr(char *box, unsigned int nb, int *c)
{
	char	n;

	n = 0;
	if (nb >= 10)
	{
		ft_treat_unsigned_nbr(box, nb / 10, c);
		ft_treat_unsigned_nbr(box, nb % 10, c);
	}
	else
	{
		n = nb + '0';
		box[*c] = n;
		*c += 1;
	}
}

char	*ft_get_unsigned_nbr(unsigned int nb)
{
	int				c;
	char			*box;
	unsigned int	m;

	c = 0;
	m = nb;
	while (m >= 10)
	{
		m = m / 10;
		c++;
	}
	box = malloc((sizeof(char)) * (c + 2));
	if (!box)
		return (NULL);
	c = 0;
	ft_treat_unsigned_nbr(box, nb, &c);
	box[c] = '\0';
	return (box);
}
