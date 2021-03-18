#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"cal.h"

#define MAXI 100

int now = 0;
char maxi[100];

int getch(void)
{
    return (now > 0) ? maxi[--now] : getchar();
}

void ungetch(int x)
{
    if (now >= MAXI)
    {
        printf("ungetch: Store Overflow\n");
    }
    else
    {
        maxi[now++] = x;
    }
}
