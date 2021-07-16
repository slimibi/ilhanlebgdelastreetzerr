/*
** ETNA PROJECT, 15/07/2021 by ginecologue
** /home/slim/picopute
** File description:
**      girontophile
*/

#include <my.h>
#include <time.h>


int is_alphanum(char c)
{
	if ((c > 64 && c < 91) 
    || (c > 48 && c <57))
		return (1);
	return (0);
}

int is_num(char c)
{
    if (c > 48 && c < 57)
		return (1);
	return (0);
}

void handle_key(t_account *chienne)
{
    chienne->IBAN[0] = 'F';
    chienne->IBAN[1] = 'R';
    while (is_num(chienne->IBAN[2]) == 0)
        chienne->IBAN[2] = rand() + '0';
    while (is_num(chienne->IBAN[3]) == 0)
        chienne->IBAN[3] = rand() + '0';
    chienne->IBAN[4] = ' ';
}

t_account *create_account()
{
    int i = 4;
    int urmom = 0;
    t_account *chienne = malloc(sizeof(t_account));
    chienne->IBAN = malloc(sizeof(char) * 34);

    srand(time(0));
    handle_key(chienne);
    while (++i < 28) {
        if (urmom == 4) {
            chienne->IBAN[i] = ' ';
            urmom = 0;
            continue;
        }
        while (is_alphanum(chienne->IBAN[i]) == 0)
            chienne->IBAN[i] = rand() + '0';
        urmom++;
    }
    return chienne;
}