#include <stdio.h>

int main()
{
	int n, w, i, b[1000001], c[1000001] = { 0 }, j, a, k = 0, m, d = 1, s = 0, e[1000001] = { 0 };
	scanf("%d%d", &n, &w);
	for (i = 1; i <= n; i++)
	{


		scanf("%d", &a);


		for (j = 1; j <= a; j++)
		{
			scanf("%d", &m);
			b[j] = m;
		}


		for (k = 0; k <= d - 1; k++)
			for (j = 1; j <= a; j++)
				c[k * a + j] = e[k + 1] + b[j];


		d = d * a;//d是所有排列的总数


		for (k = 0; k <= d - 1; k++)
			e[k + 1] = c[k + 1];
	}
	//c[k]存储的是所有加起来的值
	for (k = 1; k <= d; k++)
		if (c[k] == w) s++;
	printf("%d", s);
}