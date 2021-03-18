#include<stdio.h>
#include<ctype.h>
#include<string.h>

#include"cal.h"
#define MAX 100

int pos = 0;
double store[MAX];

void push(double db)
{
    if (pos < MAX)
    {
        store[pos++] = db;
    }
    else
    {
        printf("error: store Overflow\n");
    }
}

double pop(void)
{
    if (pos > 0)
    {
        return store[--pos];
    }
    else
    {
        printf("error: store empty\n");
    }

    return 0.00;
}

void top(void)
{
    if (pos)
    {
        printf("store_head: %g\n", store[pos - 1]);
    }
    else
    {
        printf("error: store empty\n");
    }
}

void swap(void)
{
    double flag1 = pop();
    double flag2 = pop();

    push(flag1);
    push(flag2);
}

void matching(void)
{
    double flag1 = pop();
    push(flag1);
    push(flag1);
}

void clear(void)
{
    for(int i=0;i<pos;i++)
    {
        store[pos]=0.00;
    }
}
