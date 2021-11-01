/*
** EPITECH PROJECT, 2021
** Bootstrap - parenth_deal.c
** File description:
** abc
*/

char my_parenth(char *list, int index)
{
    char temp[] = my_strlen(list);
    int count = index;
    for (; list[count] != ')'; count++)
    {
        char *temp[] = "";
        if (list[count] == '(')
        {
            my_parenth(list, count);
        }
        else if (list[count] == ')')
        {
            temp[count] = do_the_maths(temp);
            return temp;
        }
        else
        {
            temp += list[count];
        }
    }
}