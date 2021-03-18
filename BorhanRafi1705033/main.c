#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include"cal.h"
#define MAXOP 100
#define NUMBER '0'

int main(void)
{
    int type;
    double db;
    char ch[MAXOP];

    while ((type = getop(ch)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(ch));
            break;

        case '+':
            push(pop() + pop());
            break;

        case '-':
            db = pop();
            push(pop() - db);
            break;

        case '*':
            push(pop() * pop());
            break;

        case '/':
            db = pop();

            if (db != 0.0)
            {
                push(pop() / db);
            }
            else
            {
                printf("error: zero divisor\n");
            }

            break;

      case '%':
            db = pop();

            if (db != 0.0)
            {
                push((int)pop() % (int)db);
            }
            else
            {
                printf("Error!!!");
            }
            break;

         case 'e':
            push(exp(pop()));
            break;

       case '^':
            db = pop();
            push(pow(pop(), db));
            break;

        case 'd':
            matching();
            break;

        case 'h':
            top();
            break;

        case 'c':
            clear();
            break;

        case 's':
            swap();
            break;

        case '\n':
            printf("result: %.10g\n", pop());
            break;

        default:
            printf("error: unknown command %s\n", ch);
            break;
        }
    }

    return 0;
}
