#include <stdio.h>

int main()
{
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n < 100)
    {
        int tab[n];

        for (int i = 0; i < n; i++)
        {
            printf("Podaj liczbe nr %d: ", i);
            scanf("%d", &tab[i]);
        }

        for (int i = n - 1; i >= 0; i--)
            printf("%d\n", tab[i]);
    }

    return 0;
}