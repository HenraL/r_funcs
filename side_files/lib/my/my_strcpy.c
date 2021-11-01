/*
** EPITECH PROJECT, 2021
** Task01 - my_strcpy.c
** File description:
** abc
*/

char *my_strcpy(char *dest , char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return dest;
}
