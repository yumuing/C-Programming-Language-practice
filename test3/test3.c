#define _CRT_SECURE_NO_WARNINGS 1
//生成一个随机数
//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	srand((unsigned int)time(NULL));
//	for (a = 1; a <= 10; a++)
//	{
//		b = rand() % 100;
//		printf("%d ", b);
//	};
//	return 0;
//}
//求字符串长度
//#include <stdio.h>
//int my(char* a)
//{
//	if (*a != '\0')
//	{
//
//		return 1 + my(a + 1);
//	}
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char a[] = "bite";
//	int b= my(a);
//	printf("%d ",b);
//	return 0;
//}
//#include <stdio.h>
//int c(int d)
//{
//	if (d == 1)
//		return 1;
//	else
//	{
//		return d * c(d - 1);
//	}
//}
//
//
//int main()
//{
//	int n;
//	int b;
//	scanf("%d", &n);
//	b = c(n);
//	printf("%d",b);
//}
//斐波那契数：1，1，2，3，5，8，13，21，34，55...
//#include <stdio.h>
//int f(int a)
//{
//	int b = 1;
//	int c = 1;
//	int d=1;
//	for(;a > 2;a--)
//	{
//		 d = b + c;
//		 b = c;
//		 c = d;
//
//	}
//	return d;
//  }
//int f(int a)
//{
//	if (a <= 2)
//		return 1;
//	int b = 1;
//	int c = 1;
//	for(;a>2;a--)
//	{
//		
//		b= b+ c;
//		b = b + c;
//		c = b - c;
//		b = b - c;
//
//	}
//	return c;
//}
//int f(int a)
//{
//	if (a <= 2)
//		return 1;
//	if (a > 2)
//	{
//		return f(a - 1) + f(a - 2);
//	}
//}
//
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = f(a);
//	printf("%d", b);
//	return 0;
//}
#include <stdio.h>
int han(int n)
{
	int a=1;
	
	if(n>=2)
	{
		 a= 2*han(n-1)+1;
		 n--;
		
	}
	return a;
}


int main()
{
	int n;
	int ret;
	scanf("%d", &n);
	ret = han(n);
	printf("ret=%d", ret);
	return 0;
}