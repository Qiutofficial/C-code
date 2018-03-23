#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LIM 10
int main(int argc, char **argv)
{
    int current = -1, i, st[LIM] = {0};
    for (i = 1; i < argc; i++)
    {
        if ((atoi(argv[i])))
        {
          current++;
          st[current] = atoi(argv[i]);
        }
        else
        {
            if (*argv[i] == '+') {
            st[current - 1] = st[current - 1] + st[current];
            st[current] = 0;
            current--;
            }
            if (*argv[i] == '-')
            {
            st[current - 1] = st[current - 1] - st[current];
            st[current] = 0;
            current--;
            }
            if (*argv[i] == 'x') 
            {
            st[current - 1] = st[current - 1] * st[current];
            st[current] = 0;
            current--;
            }
            if (*argv[i] == '/')
            {
            st[current - 1] = st[current - 1] / st[current];
            st[current] = 0;
            current--;
            }
        }
    }
 printf("%d", st[0]);
    return 0;
}
