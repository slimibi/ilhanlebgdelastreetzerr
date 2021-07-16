/*
** ETNA PROJECT, 15/07/2021 by yes
** /home/slim/picopute
** File description:
**      salope
*/

#include <unistd.h>

int len(const char *str)
{
    return ((!(str)) || (*str) ? len(++str) + 1 : 0);
}

void put_str(char *str)
{
    write(1, str, len(str));
}

void put_char(char c)
{
    write(1, &c, 1);
}

void put_nb(int nb)
{
    if (nb < 0) {
        put_char('-');
        put_nb(-nb);
    }
    else if (nb > 9) {
        put_nb(nb / 10);
        put_nb(nb % 10);
    } else
        put_char(nb + '0');
}