/*
** EPITECH PROJECT, 2021
** Bootstrap (Workspace) - side_logic_functions.c
** File description:
** abc
*/

char in(char element, char *list_reference)
{
        for (int i = 0; list_reference[i] != '\0'; i++) {
            if (element == list_reference[i]) {
                return 1;
        }   
    }   
    return 0;
}