/*
** EPITECH PROJECT, 2021
** Task03 - my_revstr.c
** File description:
** abc
*/

char *my_revstr(char *str)
{
    int length_of_list = my_strlen( str );
    int i = 0;
    int l_o_l_max = length_of_list;
    char temp1;
    while ( i < length_of_list / 2 )
    {
        temp1 = str[ i ];
        str[i] = str[ l_o_l_max - 1 ];
        str[ l_o_l_max - 1 ] = temp1;
        l_o_l_max--;
        i++;
    }
    return str;
}
