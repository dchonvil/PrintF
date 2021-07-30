/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:19:40 by dchonvil          #+#    #+#             */
/*   Updated: 2021/07/05 19:19:53 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void    c_test()
{
    int n;

    n = 256;
    printf("\nTEST %%c\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf("%c", '0'));
    printf(": %d \n", printf("%c", '0'));
    printf(": %d \n", ft_printf(" %c ", '0'));
    printf(": %d \n", printf(" %c ", '0'));
    printf(": %d \n", ft_printf(" %c", '0' - n));
    printf(": %d \n", printf(" %c", '0' - n));
    printf(": %d \n", ft_printf(" %c", '0' + n));
    printf(": %d \n", printf(" %c", '0' + n));
    printf(": %d \n", ft_printf(" %c %c %c ", '0', 0, '1'));
    printf(": %d \n", printf(" %c %c %c ", '0', 0, '1'));
    printf(": %d \n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
    printf(": %d \n", printf(" %c %c %c ", ' ', ' ', ' '));
    printf(": %d \n", ft_printf(" %c %c %c ", '1', '2', '3'));
    printf(": %d \n", printf(" %c %c %c ", '1', '2', '3'));
    printf(": %d \n", ft_printf(" %c %c %c ", '2', '1', 0));
    printf(": %d \n", printf(" %c %c %c ", '2', '1', 0));
    printf(": %d \n", ft_printf(" %c %c %c ", 0, '1', '2'));
    printf(": %d \n", printf(" %c %c %c ", 0, '1', '2'));

    printf("========================================\n");

}

void    s_test()
{
    printf("\nTEST %%s\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf("%s", ""));
    printf(": %d \n", printf("%s", ""));
    printf(": %d \n", ft_printf(" %s", ""));
    printf(": %d \n", printf(" %s", ""));
    printf(": %d \n", ft_printf("%s ", ""));
    printf(": %d \n", printf("%s ", ""));
    printf(": %d \n", ft_printf(" %s ", ""));
    printf(": %d \n", printf(" %s ", ""));
    printf(": %d \n", ft_printf(" %s ", "-"));
    printf(": %d \n", printf(" %s ", "-"));
    printf(": %d \n", ft_printf(" %s %s ", "", "-"));
    printf(": %d \n", printf(" %s %s ", "", "-"));
    printf(": %d \n", ft_printf(" %s %s ", " - ", ""));
    printf(": %d \n", printf(" %s %s ", " - ", ""));
    printf(": %d \n", ft_printf(" %s %s %s %s ", " - ", "", "4", ""));
    printf(": %d \n", printf(" %s %s %s %s ", " - ", "", "4", ""));
    printf(": %d \n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
    printf(": %d \n", printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
    printf(": %d \n", ft_printf("Une chaine"));
    printf(": %d \n", printf("Une chaine"));
    printf(": %d \n", ft_printf("%s ", "Une autre chaine"));
    printf(": %d \n", printf("%s ", "Une autre chaine"));

    printf("========================================\n");

}

void    d_test()
{
    printf("\nTEST %%d\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf(" %d ", 0));
    printf(": %d \n", printf(" %d ", 0));
    printf(": %d \n", ft_printf(" %d ", -1));
    printf(": %d \n", printf(" %d ", -1));
    printf(": %d \n", ft_printf(" %d ", 1));
    printf(": %d \n", printf(" %d ", 1));
    printf(": %d \n", ft_printf(" %d ", -99));
    printf(": %d \n", printf(" %d ", -99));
    printf(": %d \n", ft_printf(" %d ", 99));
    printf(": %d \n", printf(" %d ", 99));
    printf(": %d \n", ft_printf(" %d ", -101));
    printf(": %d \n", printf(" %d ", -101));
    printf(": %d \n", ft_printf(" %d ", 101));
    printf(": %d \n", printf(" %d ", 101));
    printf(": %d \n", ft_printf(" %d ", -2147483647 - 1));
    printf(": %d \n", printf(" %d ", -2147483647 - 1));
    printf(": %d \n", ft_printf(" %d ", 2147483647));
    printf(": %d \n", printf(" %d ", 2147483647));
    printf(": %d \n", ft_printf(" %d %d %d %d %d %d ", 2147483647, -2147483647 - 1, 0, -42, 2147483647, -2147483647 - 1));
    printf(": %d \n", printf(" %d %d %d %d %d %d ", 2147483647, -2147483647 - 1, 0, -42, 2147483647, -2147483647 - 1));
    printf(": %d \n", ft_printf(" %%%d%% ", -42));
    printf(": %d \n", printf(" %%%d%% ", -42));

    printf("========================================\n");

}

void    i_test()
{
    printf("\nTEST %%i\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf(" %i ", 0));
    printf(": %d \n", printf(" %i ", 0));
    printf(": %d \n", ft_printf(" %i ", -1));
    printf(": %d \n", printf(" %i ", -1));
    printf(": %d \n", ft_printf(" %i ", 1));
    printf(": %d \n", printf(" %i ", 1));
    printf(": %d \n", ft_printf(" %i ", -99));
    printf(": %d \n", printf(" %i ", -99));
    printf(": %d \n", ft_printf(" %i ", 99));
    printf(": %d \n", printf(" %i ", 99));
    printf(": %d \n", ft_printf(" %i ", -101));
    printf(": %d \n", printf(" %i ", -101));
    printf(": %d \n", ft_printf(" %i ", 101));
    printf(": %d \n", printf(" %i ", 101));
    printf(": %d \n", ft_printf(" %i ", -2147483647 - 1));
    printf(": %d \n", printf(" %i ", -2147483647 - 1));
    printf(": %d \n", ft_printf(" %i ", 2147483647));
    printf(": %d \n", printf(" %i ", 2147483647));
    printf(": %d \n", ft_printf(" %i %i %i %i %i %i ", 2147483647, -2147483647 - 1, 0, -42, 2147483647, -2147483647 - 1));
    printf(": %d \n", printf(" %i %i %i %i %i %i ", 2147483647, -2147483647 - 1, 0, -42, 2147483647, -2147483647 - 1));
    printf(": %d \n", ft_printf(" %%%i%% ", 42));
    printf(": %d \n", printf(" %%%i%% ", 42));

    printf("========================================\n");

}

void    u_test()
{
    printf("\nTEST %%u\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf(" %u ", 0));
    printf(": %d \n", printf(" %u ", 0));
    printf(": %d \n", ft_printf(" %u ", -1));
    printf(": %d \n", printf(" %u ", -1));
    printf(": %d \n", ft_printf(" %u ", 1));
    printf(": %d \n", printf(" %u ", 1));
    printf(": %d \n", ft_printf(" %u ", -99));
    printf(": %d \n", printf(" %u ", -99));
    printf(": %d \n", ft_printf(" %u ", 99));
    printf(": %d \n", printf(" %u ", 99));
    printf(": %d \n", ft_printf(" %u ", -101));
    printf(": %d \n", printf(" %u ", -101));
    printf(": %d \n", ft_printf(" %u ", 101));
    printf(": %d \n", printf(" %u ", 101));
    printf(": %d \n", ft_printf(" %u ", -2147483647 - 1));
    printf(": %d \n", printf(" %u ", -2147483647 - 1));
    printf(": %d \n", ft_printf(" %u ", 2147483647));
    printf(": %d \n", printf(" %u ", 2147483647));
    printf(": %d \n", ft_printf(" %u ", (unsigned int)4294967295));
    printf(": %d \n", printf(" %u ", (unsigned int)4294967295));
    printf(": %d \n", ft_printf(" %u ", (unsigned int)-4294967295));
    printf(": %d \n", printf(" %u ", (unsigned int)-4294967295));
    printf(": %d \n", ft_printf(" %u %u %u %u %u %u ", 2147483647, -2147483647 - 1, 0, -42, (unsigned int)4294967295, (unsigned int)-4294967295));
    printf(": %d \n", printf(" %u %u %u %u %u %u ", 2147483647, -2147483647 - 1, 0, -42, (unsigned int)4294967295, (unsigned int)-4294967295));
    printf(": %d \n", ft_printf(" %%%u%% ", 42));
    printf(": %d \n", printf(" %%%u%% ", 42));

    printf("========================================\n");

}

void    x_test()
{
    printf("\nTEST %%x\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf(" %x ", 0));
    printf(": %d \n", printf(" %x ", 0));
    printf(": %d \n", ft_printf(" %x ", -1));
    printf(": %d \n", printf(" %x ", -1));
    printf(": %d \n", ft_printf(" %x ", 1));
    printf(": %d \n", printf(" %x ", 1));
    printf(": %d \n", ft_printf(" %x ", -99));
    printf(": %d \n", printf(" %x ", -99));
    printf(": %d \n", ft_printf(" %x ", 99));
    printf(": %d \n", printf(" %x ", 99));
    printf(": %d \n", ft_printf(" %x ", -101));
    printf(": %d \n", printf(" %x ", -101));
    printf(": %d \n", ft_printf(" %x ", 101));
    printf(": %d \n", printf(" %x ", 101));
    printf(": %d \n", ft_printf(" %x ", -2147483647 - 1));
    printf(": %d \n", printf(" %x ", -2147483647 - 1));
    printf(": %d \n", ft_printf(" %x ", 2147483647));
    printf(": %d \n", printf(" %x ", 2147483647));
    printf(": %d \n", ft_printf(" %x ", (unsigned int)4294967295));
    printf(": %d \n", printf(" %x ", (unsigned int)4294967295));
    printf(": %d \n", ft_printf(" %x ", (unsigned int)-4294967295));
    printf(": %d \n", printf(" %x ", (unsigned int)-4294967295));
    printf(": %d \n", ft_printf(" %x %x %x %x %x %x ", 2147483647, -2147483647 - 1, 0, -42, (unsigned int)4294967295, (unsigned int)-4294967295));
    printf(": %d \n", printf(" %x %x %x %x %x %x ", 2147483647, -2147483647 - 1, 0, -42, (unsigned int)4294967295, (unsigned int)-4294967295));
    printf(": %d \n", ft_printf(" %%%x%% ", 42));
    printf(": %d \n", printf(" %%%x%% ", 42));

    printf("========================================\n");

}

void    p_test()
{
    int n;
    int c;

    n = 0;
    c = -2147483647 - 1;
    printf("\nTEST %%p\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf(" %p ", &n));
    printf(": %d \n", printf(" %p ", &n));
    printf(": %d \n", ft_printf(" %p ", &c));
    printf(": %d \n", printf(" %p ", &c));
    printf(": %d \n", ft_printf(" %p %p ", &c, &n));
    printf(": %d \n", printf(" %p %p ", &c, &n));
    printf(": %d \n", ft_printf(" %p ", NULL));
    printf(": %d \n", printf(" %p ", NULL));

    printf("========================================\n");

}

void    prct_test()
{
    printf("\nTEST %%%%\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf(" %% "));
    printf(": %d \n", printf(" %% "));
    printf(": %d \n", ft_printf(" %%%% "));
    printf(": %d \n", printf(" %%%% "));
    printf(": %d \n", ft_printf(" %% %% %% "));
    printf(": %d \n", printf(" %% %% %% "));
    printf(": %d \n", ft_printf(" %%  %%  %% "));
    printf(": %d \n", printf(" %%  %%  %% "));
    printf(": %d \n", ft_printf(" %%   %%   %% "));
    printf(": %d \n", printf(" %%   %%   %% "));
    printf(": %d \n", ft_printf("%%"));
    printf(": %d \n", printf("%%"));
    printf(": %d \n", ft_printf("%% %%"));
    printf(": %d \n", printf("%% %%"));
    printf(": %d \n", ft_printf("%% %x %% ", -2147483647 - 1));
    printf(": %d \n", printf("%% %x %% ", -2147483647 - 1));
    printf(": %d \n", ft_printf("%s%%%c%% ", "2147483647", '.'));
    printf(": %d \n", printf("%s%%%c%% ", "2147483647", '.'));
    printf(": %d \n", ft_printf(" %%%d%% ", 42));
    printf(": %d \n", printf(" %%%d%% ", 42));

    printf("========================================\n");

}

void    multi_test()
{
    printf("\nTEST %%+\n");
    printf("========================================\n");

    printf(": %d \n", ft_printf("Avec %d %s%c %p", 4, "parametres", '.', NULL));
    printf(": %d \n", printf("Avec %d %s%c %p", 4, "parametres", '.', NULL));
    printf(": %d \n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
    printf(": %d \n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));

    printf("========================================\n");

}

int     main(void)
{
    c_test();
    s_test();
    d_test();
    i_test();
    u_test();
    x_test();
    p_test();
    prct_test();
    multi_test();

    return (0);
}