#include<stdio.h>
//int main()
//{
//	int i = 0;
//	printf("�����룺>");
//	scanf("%d", &i);
//	printf("i=%d", i);
//	return 0;
//}
//goto ���
//void num()
//{
//	printf("���");
//}
//int main()
//{
//	printf("hehe\n");
//	again:
//	 num();
//	 goto again;
//	return 0;
//}
//����һ���Զ��ػ�����
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char arr[20];
//	again:
//	printf("����һ����������������������Խ���ػ�����");
//	system("shutdown-s-t60");
//	scanf("%s", &arr);
//	if (strcmp(arr,"������")==0)
//	{
//		system("shutdown-a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//�ַ�������
//#include<string.h>
//int main()
//{
//	char arr1[] = "effrffr";
//	char arr2[] = { 0 };
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//�ڴ����� memset( , , )
//int main()
//{
//	char arr[] = "hello  world!!";
//	memset(arr,'@', 6);
//	printf("%s", arr);
//	return 0;
//}
//�Զ��庯��
//�з���ֵ
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a, b;
//	printf("�Ƚ��������Ĵ�С");
//	scanf("%d%d", &a, &b);
//	int Max=max(a, b);
//	printf("%d", Max);
//	return 0;
//}
//û�з���ֵ
//void swap(int* x, int* y)
//{
//	int i=0;
//	i = *x;
//	*x = *y;
//	*y = i;
//}
//int main()
//{
//	int a=0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int sushu(int x)
//{
//	int i = 0;
//	for (i = 2; i <= x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//
//		return 1;
//	}
//	
//}
//int main()
//{
//	
//	int a = 0;
//	scanf("%d", &a);
//	if (sushu(a) == 1)
//	{
//		printf("%d", a);
//	}
//	return 0;
//
//}
//���ַ�����Ԫ��
//int ���ַ���Ԫ��(int arr[], int x, int sz)
//{
//	int lift = 0;
//	int right = sz - 1;
//	int mid = 0;
//
//	while (lift<=right)
//	{
//		 mid = (lift + right) / 2;
//		if (arr[mid] > x)
//		{
//			 right =mid - 1;
//		}
//		else if (arr[mid]<x)
//		{
//			 lift = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (lift>right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = ���ַ���Ԫ��(arr, k, sz);
//	if (ret==-1)
//	{
//		printf("û�ҵ�����");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%d", ret);
//	}
//	return 0;
//
//}
//void Num(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		Num(&num);
//		printf("%d", num);
//	}
//}
//������Ƕ�׵���
//void mxl()
//{
//	printf("������\n");
//}
//void num()
//{
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		mxl();
//	}
//}
//int main()
//{
//	num();
//	return 0;
//}
//�����Ķ���
//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int c=add(a, b);
//	printf("%d", c);
//}
//�����ĵݹ�
//void print(int x)
//{
//	
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//
//}
//������������ַ�������
int my_strlen(char* p)
{
	if ((*p) != '\n')
	{
		return 1 + my_strlen(*p + 1);
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	char arr[] = "hello Baby!";
	int a = 0;
	int a=my_strlen(arr);
	return 0;
}