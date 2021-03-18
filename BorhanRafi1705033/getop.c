
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"cal.h"

#define NUMBER '0'

int getop(char ch[])
{
    int i = 0, x;

    while ((ch[0] = x = getch()) == ' ' || x == '\t')
        ;

    ch[1] = '\0';

    if (x != '_' && x != '.' && !isdigit(x))
    {
        return x;
    }

    if (x == '-')
    {
        int last = getch();
        if (!isdigit(last) && last != '.')
        {
            return last;
        }

        ch[i] = x;
        ungetch(x = last);
    }
    else
    {
        x = getch();
    }
    if (x == '.')
    {
        while (isdigit(ch[++i] = x = getch()))
            ;
    }
    if (isdigit(x))
    {
        while (isdigit(ch[++i] = x = getch()))
            ;
    }
    if (x != EOF)
    {
        ungetch(x);
    }

    return NUMBER;
}
