#include<stdio.h>
//判断S2是否由S1旋转得到
//#include<string.h>
//#include<assert.h>
//int is_move(char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	if (strlen(s1)!=strlen(s2))
//	{
//		return 0;
//	}
//	strncat(s1, s2, strlen(s2));
//	if (strstr(s1, s2)==NULL)
//	{
//		return 0;
//	} 
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_move(arr1, arr2);
//	if (ret==1)
//	{
//		printf("yes!!\n");
//	}
//	else
//	{
//		printf("no!!\n");
//	}
//	return 0;
//}
//杨氏矩阵查找
//int yangB(int* p[2][2],const int k, int* row, int* col)
//{
//	int a = 0;
//	int b = *col - 1;
//	while (a<=row-1&&b>=0)
//	{
//		if (p[a][b] > k)
//		{
//			b--;
//		}
//		 if (p[a][b]<k)
//		{
//			a++;
//		}
//		else
//		{
//			*row = a;
//			*col = b;
//			return 1;
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3;
//	int y = 3;
//	int k = 0;
//	scanf("%d", &k);
//	int ret = yangB(arr, k, &x, &y);
//	if (ret==1)
//	{
//		printf("找到了，坐标为%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//字符串的拷贝
#include<assert.h>
char* my_strcpy(char* s1, char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char* ret = s1;
	while (*s1++=*s2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[] = "nima";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}