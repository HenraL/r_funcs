/*
** EPITECH PROJECT, 2021
** Bootstrap - live_testing.c
** File description:
** This file is for testing snipsets of code via a main.
*/

int main()
{
    char legal_ascii[] = {'\0',' ','0','1','2','3','4','5','6','7','8','9','+','-','/','*','%','(',')','.',','};
    char authed_symbols[] = {'+','-','/','*','%'};
    /*char*/ int *All_lists=malloc(sizeof(char)+strlen(legal_ascii)+authed_symbols);
    
    return All_lists;
}
