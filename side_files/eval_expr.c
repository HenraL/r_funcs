/*
** EPITECH PROJECT, 2021
** eval_expr
** File description:
** Wed_27
*/

#include "include/my_inner_bootstrap.h"

int eval_expr(char const *str)
{
    send(str);
    //my_parenth();
    //trans_Not();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        my_putchar(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
