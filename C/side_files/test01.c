/*
** EPITECH PROJECT, 2021
** test01
** File description:
** test
*/

#include <stdio.h>
#include <unistd.h>
#include "eval_expr.c"

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while(str[i] !='\0')
    {
        i = i+1;
    }
    return i;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
int send(char const *str)
{
    int last_char = my_strlen(str) -1;

    if (str[0] < 48) {
        //Prefix_Notation;
        my_putchar('y');
    } else if (str[last_char] < 48) {
        //Postfix_Notation;
        my_putchar('n');
    } else {
        //Infix_Notation;
        my_putchar('p');
    }
}

// int main(int ac, char **av)
// {
//     if (ac == 2) {
//         my_putchar(eval_expr(av[1]));
//         my_putchar('\n');
//         return (0);
//     }
//     return (84);
// }
