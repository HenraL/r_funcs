/*
** EPITECH PROJECT, 2021
** Bootstrap - translate.c
** File description:
** abc
*/

#include <stdio.h>
#include "include/my_inner_bootstrap.h"

// char authed_symbols[]='+-/*%';
/*list[i] == '+' || list[i] == '-' || list[i] == '/' || list[i] == '*' || list[i] == '%'*/

char translate_signs(char *list, int index, char *authed_symbols)
{
    int i = 0;
    //char temp_chars;
    int stop = 0;
    int sign_found = 0;
    char symb;
    char nb1;
    char nb2;
    int space_found = 0;
    char *complete;
    while ( stop == 0 ) {
        printf("in='%d'\n",in( list[i], authed_symbols));
        printf("list[i]='%d'\n",list[i]);
        if ( (in( list[i], authed_symbols) == 1 || list[i]=='(' || list[i] == ')' ) && sign_found == 1) {
            stop = 1;
            printf("e\n");
        }
        if ( in( list[i], authed_symbols ) == 1 ) {
            sign_found = 1;
            symb += list[i];
            printf("m\ntemp_char='%d'\n",symb);
        } else if ( ! ( in( list[i], authed_symbols ) == 1) ) {
            printf("k\n");
            /*complete = number_sort(list[i],space_found);
            nb1 = complete[0];
            nb2 = complete[1];*/
            if (space_found == 1) {
                nb1 += str;
            } else {
                nb2 += str;
            }
            printf("l\n");// 32 = Space
            printf("nb1='%d'\n",nb1);
            printf("nb1='%d'\n",nb2);
        } else {
            printf("g\n");
            stop = 1;
            return 84;
        }
        i++;
    }
    char result = ( (nb1 - 48) + symb + (nb2 - 48) ) + 48;
    return result;
}

char number_sort(char *str, int space_found) 
{
    char *nb;
    if (space_found == 1) {
        nb[0] = str;
        nb[1] = "";
    } else {
        nb[0] = "";
        nb[1] = str;
    }
    return nb;
}

// int main()
// {
//     printf("In main\n");
//     char authed_symbols[]="+-/*%";
//     char list[]="2+3+4 5+2+5 %9/3*4+0";
//     char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="5 * 2 + 3";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="5 2 * 3 +";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="+ 3 * 5 2";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="(+ (* 5 2) 3)";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="+( *(5 2) 3)";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="(* (+ 5 2 +) 3 *)";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="(3+(2*5))>7";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[]="(a△b)▲c";
    // char result=translate_signs(list,0,authed_symbols);
    // printf("result='%s'\n",result);
    // char *list[] = "(2+4*(5*2*4*(10+2)*4)+2)";
    // char result[] = translate_signs(list,0,authed_symbols);
    // printf("result='%d'\n",result);
// }