#include<stdio.h>
//int main()
//{
//	//字符串类型
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr+0));
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr+1));
//
//	return 0;
//}
//（字符串）指针类型
//int main()
//{
//	char* p = "abcdef";
//	
//		printf("%d\n", sizeof(p));
//		printf("%d\n", sizeof(p+1));
//		printf("%d\n", sizeof(*p));
//		printf("%d\n", sizeof(p[0]));
//		printf("%d\n", sizeof(&p));
//		printf("%d\n", sizeof(&p+1));
//		printf("%d\n", strlen(p));
//		printf("%d\n", strlen(p+1));
//	//	printf("%d\n", strlen(*p));
//	//	printf("%d\n", strlen(p[0]));
//		printf("%d\n", strlen(&p));
//		printf("%d\n", strlen(&p+1));
//	return 0;
//}
//二维数组类型
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0]+1));
//	printf("%d\n", sizeof(*(a[0]+1)));
//	printf("%d\n", sizeof(a+1));
//	printf("%d\n", sizeof(*(a+1)));
//	printf("%d\n", sizeof(&a[0]+1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}
//指针笔试题
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);
//	printf("%d,%d\n",*(a+1),*( p - 1));
//	return 0;
//}
//struct text
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char ch[2];
//	short sbq[4];
//}*p;
//int main()
//{
//	p = (struct text*)0X100000;
//	printf("%p\n", p + 1);
//	printf("%p\n", (unsigned long)p + 1);
//	printf("%p\n", (unsigned int*)p + 1);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	printf("%x,%x\n", p1[-1], *p2);
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}