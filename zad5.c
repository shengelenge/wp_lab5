#include <stdio.h>

int main()
{
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n < 100)
    {
        int tab[n];
        int tab1[n];

        for (int i = 0; i < n; i++)
        {
            printf("Podaj liczbe nr %d: ", i);
            scanf("%d", &tab[i]);

            for (int j = n - 1, d = 0; j >= 0; j--,d++)
            {
                tab1[d] = tab[j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d\n", tab1[i]);
        }

    }

    return 0;
}