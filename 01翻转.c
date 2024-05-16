#include <stdio.h>

int main()
{
    int N, sum, num, n;

    char str[200005];
    int arr[200005];

    scanf("%d", &N);
    while (N--)
    {
        sum = 0;
        scanf("%d", &num);
        scanf("%s", str);
        n = 0;
        for (int i = 0; i <= num - 1; i++)
        {
            if (str[i] == '1')
            {

                arr[n] = i;
                n++;
                while (n >= 2)
                {
                    if ((arr[n - 1] - arr[n - 2]) % 2 == 0)
                        break;
                    sum += (arr[n - 1] - arr[n - 2] - 1) + 1;
                    n -= 2;
                }
            }
        }

        if (n > 0)
            printf("%d\n", -1);
        else
            printf("%d\n", sum);
    }
    return 0;