/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:15:46 by dchonvil          #+#    #+#             */
/*   Updated: 2021/08/13 20:42:29 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H

# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *print, ...);
int		ft_count(char *str);
void	ft_putnbr_spe(int nb, int *i);
char	*ft_getnbr(int nb);
void	ft_putchar_spe(char l, int *i);
void	ft_putstr_spe(char *str, int *i);
char	*ft_getstr(char *str);
void	ft_rev_tab(char *box, int n);
void	ft_put_unsigned_nbr(unsigned int nb, int *i);
char	*ft_get_unsigned_nbr(unsigned int nb);
void	ft_treat_unsigned_nbr(char *box, unsigned int nb, int *c);
void	ft_treat_nbr(char *box, int nb, int *c);
void	print_treatment(const char *print, va_list args, int *i);
void	put_hexa(const char *print, va_list args, int c, int *i);
char	*put_hexa_spe(const char *print, va_list args, int c);
void	filler_spe(char *box, char type, long long int nb);
void	check_nbr(const char *print, va_list args, int c, int *i);
char	*check_nbr_spe(const char *print, va_list args, int c);
void	check_char(const char *print, va_list args, int c, int *i);
char	*check_char_spe(const char *print, va_list args, int c);
void	filler(char *box, const char *base, long long int nb);
char	*hexa_treatment(char type, const char *base, va_list args);
void	check_spe_arg(const char *print, va_list args, int *c, int *i);
char	*check_arg_bonus(const char *print, va_list args, int *c);
void	treat_arg(char *box, char l, int *i, int j);
void	check_arg_plus(const char *print, va_list args, int *c, int *i);
void	del_space(const char *print, char *l, int *c, int *i);
void	get_buffer(const char *print, int *c, int *j);
void	exec_arg_zero(char *box, int *i, int c, int j);
void	exec_arg_bar(char *box, int *i, int c, int j);
void	exec_arg_dot(char *box, int *i, int c, int j);
void	exec_arg_tag(char *box, int *i, int c, int j);

#endif
