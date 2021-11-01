/*
** EPITECH PROJECT, 2021
** TestFile - tester.c
** File description:
** abc
*/

#include <criterion/criterion.h>
#include "eval_expr.c"
Test(side_starter, add_zero)
{
    cr_assert_str_eq(side_starter("0", "0"), "0");
}

Test(side_starter, add_zero_and_one)
{
    cr_assert_str_eq(side_starter("0", "1"), "1");
}

Test(side_starter, add_one_and_zero)
{
    cr_assert_str_eq(side_starter("1", "0"), "1");
}

Test(side_starter, add_one_and_one)
{
    cr_assert_str_eq(side_starter("1", "0"), "1");
}
