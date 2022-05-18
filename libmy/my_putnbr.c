/*
** ETNA PROJECT, 04/11/2021 by sangou_b
** my_putnbr.c
** File description:
**      print a int
*/

void my_putchar(char c);

void my_putnbr(int nb)
{
    int x = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            x = (nb % 10);
            nb = (nb - x) / 10;
            my_putnbr(nb);
            my_putchar(48 + x);
        }
        else
            my_putchar(48 + nb % 10);
    }
}
