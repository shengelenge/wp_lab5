#include <stdio.h>

int main()
{
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n < 1000)
    {
        int T[n];
        int i, m;

        for (i = 0; i < n; i++)
            T[i] = 1;

        i = 2;

        while (i <= n)
        {
            m = 2 * i;
            while (m <= n) {
                T[m] = 0;
                m += i;
            }
            do {
                i++;
            } while (T[i] == 0 && i <= n);
        }

        for (int i = 2; i < n; i++)
            if (T[i] == 1){
                printf("%d ", i);}

    }

    return 0;
}


