#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int i, j, t, a, c[1000000] = { 0 }, n[1000000], e[1000000], d = 1;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &n[i]);
        for (j = 0; j < d; j++)
        {
            for (t = 0; t < n[i]; t++)
                c[j * n[i] + t] = e[j];
        }
        for (j = 0; j < n[i]; j++)
        {
            scanf("%d ", &a);
            for (t = 0; t < d; t++)
                c[t * n[i] + j] += a;
        }
        d *= n[i];
        for (j = 0; j < d; j++)
            e[j] = c[j];
    }
    int num = 0;
    for (i = 0; i < d; i++)
    {
        if (c[i] == M)
            num++;
    }
    printf("%d", num);
    return 0;
}