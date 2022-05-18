/*
** ETNA PROJECT, 19/10/2021 by sangou_b
** my_getnbr.c
** File description:
**      getnbr
*/

int my_getnbr(const char *str)
{
    int nb = 0;
    int signe = 1;
    int count = 0;

    for (; str[count] == '+' || str[count] == '-'; count++)
        if (str[count] == '-')
            signe *= -1;
    for (; str[count] != '\0'; count++) {
        if (str[count] >= '0' && str[count] <= '9') {
            nb *= 10;
            nb += (str[count] - '0');
        } else
            return (nb * signe);
    }
    return (nb * signe);
}
