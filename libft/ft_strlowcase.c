/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:50:28 by dchonvil          #+#    #+#             */
/*   Updated: 2021/10/28 00:21:36 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}
