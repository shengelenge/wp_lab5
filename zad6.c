#include <stdio.h>

int main()
{
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n < 100)
    {
        int tab[n], pom[n];

        for (int i = 0; i < n; i++)
        {
            printf("Nr %d: ", i);
            scanf("%d", &tab[i]);
        }

        for (int i = 0, d = n - 1; i < n; i++, d--)
        {
            pom[i] = tab[i];
            tab[i] = tab[d];
            printf("%d\n", tab[i]);
            tab[i] = pom[i];
        }
    }

    return 0;
}