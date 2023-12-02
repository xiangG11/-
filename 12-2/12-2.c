#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*i+1; j++)
//		{ 
//			printf("*");
//		} 
//		printf("\n");
//	}
//	for ( i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)(*(a + 1));
//	printf("%d,%d\n", *(p1 - 1), *(p2 - 2));
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** pa[] = { c + 3,c + 2,c + 1,c };
//	char*** ppa = pa;
//	printf("%s\n", **++ppa);
//	printf("%s\n", *--*++ppa+3);
//	printf("%s\n", *ppa[-2]+3);
//	printf("%s\n", ppa[-1][-1]+1);
//	return 0;
//}
//int main()
//{
//	unsigned long arr[] = { 6,7,8,9,10 };
//	unsigned long* p = arr;
//	*(p + 3) += 3;
//	printf("%d,%d\n", *p, *(p + 3));
//	return 0;
//}
//写一个函数，逆序字符串内容
//void reverse(char* str)
//{
//	char* life = str;
//	char* right = str + (strlen(str) - 1);
//	while (life<right)
//	{
//		char tmp = *life;
//		*life = *right;
//		*right = tmp;
//		life++;
//		right--;
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	reverse(str);
//	printf("%s\n", str);
//	return 0;
//}
//求1-100000所有水仙花数（自幂数）
#include<math.h>
int main()
{
	int i = 0;
	for ( i = 1; i <=100000 ; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp/=10)
		{
			n++;
		}
		int cmp = i; int num = 0;
		while (cmp)
		{
			
			num += pow(cmp % 10,n);
			cmp /= 10;
		}
		if (i==num)
		{
			printf("%d\n", num);
		}
	}
	
	return 0;
}