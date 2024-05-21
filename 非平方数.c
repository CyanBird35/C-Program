#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d ", &arr[i]);

    int max = 0;
    for (i = 0; i < n; i++)
    {
        int num = arr[i];
        int j = 1, flag = 0;
        for (j = 1; j <= num / 2; j++)
        {
            if (num == j * j)
            {
                flag = 1;
            }
        }
        if (flag == 0 && num > max)
            max = num;
    }

    printf("%d", max);
    return 0;
}