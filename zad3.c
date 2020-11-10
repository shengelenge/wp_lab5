#include <stdio.h>

int main()
{
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n < 20)
    {
        int tab[n];

        tab[0] = 0;
        tab[1] = 1;

        if (n == 1)
            printf("%d", tab[0]);
        else if (n == 2)
            printf("%d %d", tab[0], tab[1]);
        else if (n == 3)
            tab[2] = tab[1] + tab[2];
            printf("%d %d %d", tab[0], tab[1], tab[2]);
        else if (n >= 4)
            tab[2] = tab[1] + tab[0]
            for (int i = 2; i < n ; i++)
            {
                printf("");
            }




    }


    return 0;
}