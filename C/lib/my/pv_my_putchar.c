/*
** EPITECH PROJECT, 2021
** myPutChar
** File description:
** abc.
*/

#include <unistd.h>

void my_putchar(char word)
{
    write(1, &word, 1);
}
