/*
** ETNA PROJECT, 15/07/2021 by caveasperme
** /home/slim/picopute
** File description:
**      bazané
*/

#include "my.h"

int deposit(t_user *user, int amount)
{
    int cum = amount;

    if (cum < -1)
        return 1;
    user->account->conasse += cum;
    return 0;
}

int withdraw(t_user *user, int amount)
{
    int cum = amount;

    if (cum < -1)
        return 1;
    user->account->conasse -= cum;
    return 0;
}