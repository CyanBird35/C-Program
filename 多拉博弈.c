#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i = n, arr1[n][2], arr2[n][2];
    for (i = 0; i < n; i++) {
        scanf("%d %d", &arr1[i][0], &arr1[i][1]);
        scanf("%d %d", &arr2[i][0], &arr2[i][1]);
    }
    int a, b;
    for (i = 0; i < n; i++)
    {
        a = arr2[i][0] - arr1[i][0];
        b = arr2[i][1] - arr1[i][1];
        if (a % 4 == 0 && b % 4 != 0 || a % 4 != 0 && b % 4 == 0)
            printf("win\n");
        else if ((a - b) % 4 == 0 || (b - a) % 4 == 0)
            printf("lose\n");
        else
            printf("win\n");
    }
/*
    横坐标的差值为x，纵坐标差值为y
        易得到（x，y）相等时，即x = y时先手必败（后手可以完全模仿先手行动）

        （1，2）（1，3）（1，4）  先手可以使后手面临 （1，1），故必胜
        (1, 5)       无法将后手面临 （1，1），故必败
        （1，6）（1，7）（1，8）      可以使后手面临 （1，5），故必胜


        （2，3）（2，4）（2，5）  同理可以把对手变成（2，2），故必胜

        以此类推
        得到只要（x - y） / 4 或者（y - x） / 4 的余数为0 ，则先手必败
*/
