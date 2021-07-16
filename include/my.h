/*
** ETNA PROJECT, 15/07/2021 by yes
** /home/slim/picopute
** File description:
**      hentailord
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#ifndef JUIF_H_
#define JUIF_H_
#define UNUSED(x) (void)(x)
#define C_HELP_STR "USAGE\n\
    ./my_sokoban map\n\
DESCRIPTION\n\
    map file representing the warehouse map, containing\
     ‘#’ for walls,\n\
       ‘P’ for the salope, ‘X’ for boxes and ‘O’ \
       for storage locations."


typedef struct s_account
{
    int conasse;
    char *IBAN;
} t_account;

typedef struct s_user
{
    char *name;
    char *email;
    t_account *account;
} t_user;

void put_str(char *);
void put_nb(int );
int deposit(t_user *, int);
int deposit(t_user *, int );
int withdraw(t_user *, int);
t_account *create_account();

#endif /* JUIF_H_ */
