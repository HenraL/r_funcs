/*
** EPITECH PROJECT, 2021
** Task0? - my_compute_square_root.c
** File description:
** abc
*/

int pv_my_compute_square_root(int nb)
{
    int i = 0;
    if (nb < 0 || nb == 0) {
        return 0;
    }
    for (; i * i != nb; i++;) {
        if (i > nb) {
            return 0;
        }
    }
    while (a * a != nb) {
        a = a + 1;
        if (a > nb)
        {
            return (0);
        }
    }
    return (a);
}
