/*
** EPITECH PROJECT, 2021
** Task04 - my_compute_power_rec.c
** File description:
** abc
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0 ) {
        return 0;
    }
    if ( p == 0 ) {
        return 1;
    }
    p--;
    return (nb*my_compute_power_rec( nb, p ));
}
