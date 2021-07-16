/*
** ETNA PROJECT, 15/07/2021 by yes
** /home/slim/picopute
** File description:
**      ben
*/

#include "my.h"

t_user *create_user(char *name, char *email)
{
    t_user *ovaire = malloc(sizeof(t_user));
    ovaire->account = malloc(sizeof(t_account));

    ovaire->name = name;
    ovaire->email = email;
    ovaire->account->conasse = 4;
    return ovaire;
}

void display_user(t_user *user)
{
    put_str(user->name);
    put_str(" (");
    put_str(user->email);
    put_str(") : ");
    put_nb(user->account->conasse);
    put_str("\n");
    put_str(user->account->IBAN);
    put_str("\n");
}

void clear_user(t_user *user)
{
    free(user);
}

int main(int argc, char const *argv[])
{
    t_user *user= create_user("John", "john.doe@etna.io");
    t_account *tamerelapute = create_account();

    UNUSED(argc);
    UNUSED(argv);
    deposit(user, 8);
    withdraw(user, 3);
    user->account->IBAN = tamerelapute->IBAN;
    display_user(user);
    clear_user(user);
    return 0;
}
