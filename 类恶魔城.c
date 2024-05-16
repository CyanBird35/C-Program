#include<stdio.h>
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int arr[1000];
    int i, j, d;
    float c[1000], p;
    int a[1000], b[1000];
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        c[i] = a[i] * 0.7 + b[i] * 0.2;
    }

    for (i = 0; i < N; i++)
    {
        d = 0;
        p = c[i] + 10;
        for (j = 0; j < N; j++)
        {
            if (p < c[j])
                d++;
        }
        if (d < K)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}