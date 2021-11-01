/*
** EPITECH PROJECT, 2021
** test01
** File description:
** test
*/
#include <stdio.h>
#include <unistd.h>
#include "eval_expr.c"
#include "side_logic_functions.c"
#include "del_space_Infix.c"

int my_strlen_space(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
    {
    }
    i--;
    for (; str[i] == ' '; i--)
    {
    }
    return i;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
int send(char const *str)
{
    char authed_symbols[] = "+-/*%";
    int last_char = my_strlen_space(str);
    int z = 0;

    for (; str[z] == ' '; z++)
    {
    }
    if (in(str[z], authed_symbols))
    {
        //Prefix_Notation;
        my_putchar('y');
    }
    else if (in(str[last_char], authed_symbols))
    {
        //Postfix_Notation;
        my_putchar('n');
    }
    else
    {
        //Infix_Notation;
        my_putchar('p');
        del_space_Infix;
    }
}

// void main(int ac, char **av)
// {
//     if (ac == 2) {
//         my_putchar(eval_expr(av[1]));
//         my_putchar('\n');
//         return (0);
//     }
//     return (84);
// }