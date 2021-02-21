#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//三数排序
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d", &a, &b,&c);
//	if (a < b)
//	{
//		int tmp;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//判断个位或十位是否为九
//int main()
//{
//	int a;
//	int b;
//	int count=0;
//  scanf("%d %d",&a,&b);
//	for (a = 1; a < b; a++)
//	{
//		if (a % 10 == 9)
//		{
//			printf(" %d", a);
//			count++;
//		}
//		if (a / 10 == 9)
//		{
//			printf(" %d", a);
//				count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//求两数间最大公约数
//int main()
//{
//	int a;
//	int b;
//	int ret;
//	scanf("%d %d", &a, &b);
//	while (ret=a % b)
//	{
//		a = b;
//		b = ret;
//	}
//	printf("%d", b);
//	return 0;
//}
//求某个范围的闰年
//int main()
//{
//	int a;
//	int b;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	for (; a < b; a++)
//	{
//		if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//打印1 / 2 + 1 / 3 - 1 / 4.... - 1 / 100结果
//int main()
//{
//	int a = 1;
//	int f = 1;
//	double sum = 0;
//	double b = 0.0;
//	for (b=1; b <= 100; b++)
//	{
//		sum += f * 1 / b;
//		f = -f;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//乘法口诀表
//右下角
int main()
{
	int i;
	int	j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);//\t一个制表符距离
		}
		printf("\n");
	}
	return 0;
}
//正方形
//int main()
//{
//	int a;
//	int b;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <=9; b++)
//		{
//			printf(" %d*%d=%-2d", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}