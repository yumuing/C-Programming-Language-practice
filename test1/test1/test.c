#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//打印倍数
//int main()
//{
//	int x = 0;//倍数目标
//	int y = 0;//倍数范围
//	int i = 1;
//	scanf("%d/n", &x);
//	scanf("%d/n", &y);
//	for (; x <= y; x = i * x)
//	{
//		printf("%d ", x);
//		i++;
//	};
//	return 0;
//}
//打印偶数
//int main()
//{
//	int n = 1;//偶数目标
//	int i = 0;//偶数范围
//	scanf("%d/n", &i);
//	while (n <= i)
//	{
//		if (n % 2 == 0)
//		{
//			printf("%d\n", n);
//		};
//		n++;
//		
//	}
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//打印素数
//方法1
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        for (j = 2; j <= i - 1; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (j == i)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d", count);
//    return 0;
//}
//方法2
//#include <math.h>;
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i += 2)
//    {
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (j > sqrt(i))
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d", count);
//    system("pause");
//    return 0;
//
//}

//计算阶乘
//int main()
//{
//	long x=0;//目标
//	int y=0;
//	int ret = 1;
//	scanf("%d/n", &x);
//	for (y = 1; y <= x; y++)
//	{
//		ret = ret * y;
//	};
//	printf("%d\n", ret);
//	return 0;
//}
//计算阶乘相加
//int main()
//{
//	long x = 1;
//	int y = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d/n", &n);//阶乘范围
//	while(x<=n)
//	{
//		ret = 1;
//		for (y = 1; y <= x; y++)
//			{
//				ret = ret * y;
//			};
//		sum  += ret;
//		x++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//二分法
int main()
{
	int left = 0;
	int right = 0;
	int k = 0;
	int n = 0;
	int z = 0;
	char arr[] = { 1,2,3,4,5,6,8,9 };//查找范围
	scanf("%d", &k);
	n = sizeof(arr) / sizeof(arr[0]);
	right = n - 1;
	while (left <= right)
	{
		z = (left + right) / 2;
		if (arr[z] < k)
		{
			left = z + 1;
		}
		else if (arr[z] > k)\
		{
			right = z - 1;
		}
		else
		{
			printf("找到了,下标是%d", z);
			break;
		}

	}
	if (left > right)
		printf("找不到");
	return 0;
}