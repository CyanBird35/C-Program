#include <stdio.h>

int main()
{
    int T, H, t, n;
    scanf("%d %d %d %d", &T, &H, &t, &n);

    double a = (double)H / T;
    double b = (double)n / t;

    if (H * t >= n * T)
        printf("kirito");
    else
        printf("hangeki");

    return 0;
}
//如果用乘法去比较可能会导致数据太大超出了int所能容纳的范围
//所以用double型的除法达成