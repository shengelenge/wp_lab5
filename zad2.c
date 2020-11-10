#include <stdio.h>

int main()
{
    int tab[20];

    for (int i = 0; i < 20; i++)
    {
        tab[i] = i + 1;
        printf("%d ", tab[i]);
    }

    return 0;
}