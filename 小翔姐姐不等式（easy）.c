#include <stdio.h>

int main()
{
    int a, b;
    int num = 0;
    scanf("%d %d", &a, &b);
    int x, y;
    num += (b - a + 1) * (b - a + 1);

    for (x = 0; x < a; x++)
        for (y = a; y < b + 1; y++)
            if (2 * x * y / (x + y) >= a && x * x + y * y <= 2 * b * b)
                num += 2;

    for (x = a; x < b + 1; x++)
        for (y = b + 1; y < 2 * b; y++)
            if (2 * x * y / (x + y) >= a && x * x + y * y <= 2 * b * b)
                num += 2;

    for (x = 0; x < a; x++)
        for (y = b + 1; y < 2 * b; y++)
            if (2 * x * y / (x + y) >= a && x * x + y * y <= 2 * b * b)
                num += 2;

    printf("%d", num);
}

//��Ϊ�Ǻ��ʽ�����м�ļ����ǲ��ؿ��ǵģ������ĸ������ڼ���
