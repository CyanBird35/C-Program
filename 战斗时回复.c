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
//����ó˷�ȥ�ȽϿ��ܻᵼ������̫�󳬳���int�������ɵķ�Χ
//������double�͵ĳ������