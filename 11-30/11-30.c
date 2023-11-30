#include<stdio.h>
//int main()
//{
////	printf("hello world");
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d%d", a, b);
//	return 0;
//}
//设计qsort函数
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void swap(char* b1, char* b2, int width)
//{
//	int i = 0;
//	for ( i = 0; i < width; i++)
//	{
//		char tmp = *b1;
//		*b1 = *b2;
//		*b2 = tmp;
//		b1++;
//		b2++;
//	}
//}
//void buttle_sort(void* base, int sz, int width, int(*tmp)(void* e1, void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (tmp((char*)base + j * width, (char*)base + (j+1) * width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void text1()//整型数组排序
//{
//	int arr[] = { 4,3,8,7,2,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buttle_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d \n", arr[i]);
//	}
//}
//int main()
//{
//	text1();
//	return 0;
//}
//int main()
//{
//	int a[] = { 2,3,5,6,7 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a+0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a+1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a+1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0]+1));
//	
//	return 0;
//}
//int main()
//{
//	char a[] = { 'a','c','g','r' };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a+0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(&a+1));
//	printf("%d\n", sizeof(&a[0]+1));
//	
//	return 0;
//}
#include<string.h>
int main()
{
	int a[] = { 2,3,5,6,7 };
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a+0));
	printf("%d\n", strlen(*a));
	printf("%d\n", strlen(a+1));
	printf("%d\n", strlen(a[1]));
	printf("%d\n", strlen(&a));
	printf("%d\n", strlen(*&a));
	printf("%d\n", strlen(&a+1));
	printf("%d\n", strlen(&a[0]));
	printf("%d\n", strlen(&a[0]+1));
	
	return 0;
}