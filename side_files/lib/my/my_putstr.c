/*
** EPITECH PROJECT, 2021
** Task02 - my_putstr.c
** File description:
** abc
*/

int my_putstr(char const *str)
{
    for (int  i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
