/*
** EPITECH PROJECT, 2021
** Bootstrap - illegal_ascii.c
** File description:
** abc
*/

char authed_lists()
{
    char legal_ascii[] = {'\0', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '-', '/', '*', '%', '(', ')', '.', ','};
    char authed_symbols[] = {'+', '-', '/', '*', '%'};
    char *All_lists = malloc(sizeof(char) + strlen(legal_ascii) + authed_symbols);

    return All_lists;
}
