/*
** EPITECH PROJECT, 2021
** del_space_Infix
** File description:
** 28 Oct
*/

int del_space_Infix(char const *str)
{

    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] == ' ') {
            my_putchar (1);
        } else {
                my_putchar(a);
        }
    }
}