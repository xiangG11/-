#include<stdio.h>
//int main()
//{
//	int i = 0;
//	printf("请输入：>");
//	scanf("%d", &i);
//	printf("i=%d", i);
//	return 0;
//}
//goto 语句
//void num()
//{
//	printf("你好");
//}
//int main()
//{
//	printf("hehe\n");
//	again:
//	 num();
//	 goto again;
//	return 0;
//}
//定义一个自动关机程序
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char arr[20];
//	again:
//	printf("请在一分钟内输入我是猪，否则电脑将会关机！！");
//	system("shutdown-s-t60");
//	scanf("%s", &arr);
//	if (strcmp(arr,"我是猪")==0)
//	{
//		system("shutdown-a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//字符串拷贝
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
//内存设置 memset( , , )
//int main()
//{
//	char arr[] = "hello  world!!";
//	memset(arr,'@', 6);
//	printf("%s", arr);
//	return 0;
//}
//自定义函数
//有返回值
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a, b;
//	printf("比较两个数的大小");
//	scanf("%d%d", &a, &b);
//	int Max=max(a, b);
//	printf("%d", Max);
//	return 0;
//}
//没有返回值
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
//二分法查找元素
//int 二分法查元素(int arr[], int x, int sz)
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
//	int ret = 二分法查元素(arr, k, sz);
//	if (ret==-1)
//	{
//		printf("没找到！！");
//	}
//	else
//	{
//		printf("找到了，%d", ret);
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
//函数的嵌套调用
//void mxl()
//{
//	printf("孟祥礼\n");
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
//函数的定义
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
//函数的递归
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
//	printf("请输入一个数字");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//
//}
//不设变量，求字符串长度
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