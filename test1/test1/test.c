
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��ӡ����
//int main()
//{
//	int x = 0;//����Ŀ��
//	int y = 0;//������Χ
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
//��ӡż��
//int main()
//{
//	int n = 1;//ż��Ŀ��
//	int i = 0;//ż����Χ
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
//��ӡ����
//int main()
//{
//	long x = 0;
//	long y =2;//������
//	long z = 0;
//	scanf("%d", &x);//��ʼ����
//	scanf("%d", &z);//��������
//	
//	return 0;
//}
//����׳�
//int main()
//{
//	long x=0;//Ŀ��
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
//����׳����
//int main()
//{
//	long x = 1;
//	int y = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d/n", &n);//�׳˷�Χ
//	while(x<=n)
//	{
//		ret = 1;
//		for (y = 1; y <= x; y++)
//			{
//				ret = ret * y;
//			};
//		sum = sum + ret;
//		x++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//���ַ�
int main()
{
	int left = 0;
	int right = 0;
	int k = 0;
	int n = 0;
	int z = 0;
	char arr[] = { 1,2,3,4,5,6,8,9 };//���ҷ�Χ
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
			printf("�ҵ���,�±���%d", z);
			break;
		}

	}
	if (left > right)
		printf("�Ҳ���");
	return 0;
}