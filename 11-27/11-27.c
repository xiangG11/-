#include<stdio.h>
//字符指针
//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", *p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char *p1 = "abcdef";
//	char *p2 = "abcdef";
//	printf("%p\n", arr1);
//	printf("%p\n", arr2);
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	return 0;
//}
//指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* p[] = {arr1,arr2,arr3};
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针
//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//	return 0;
//}
//一维数组传参
//void text(int arr[])
//{}
//void text1(int arr[10])
//{}
//void text2(int* p)
//{}
//void text3(int* p[])
//{}
//void text4(int** p)
//{}
//int main()
//{
//	int arr[] = { 0 };
//	text(arr);
//	text1(arr);
//	text2(arr);
//	int* p[] = { 0 };
//	text3(p);
//	text4(p);
//	
//	return 0;
//
//}
//二维数组传参
//void text(int arr[][5])
//{}
//void text1(int(*p)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	text(arr);
//	text1(arr);
//	return 0;
//
//}
//一级指针传参
//void text(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	text(&a);
//	text(p);
//	int arr[] = { 0 };
//	text(arr);
//return 0;
//}
//二级指针传参
void text(int**  p)
{}
int main()
{
	int a = 10;
	int* p = &a;
	int** pc = &p;
	text(pc);
	text(&p);
	int* arr[] = { 0 };
	text(arr);
	return 0;
}