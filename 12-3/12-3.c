#include<stdio.h>
//喝汽水问题
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	total = money;
//	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("%d", total);
//	return 0;
//}
//调整数组奇数在前，偶数在后。
//#include<assert.h>
//void move(int arr[], int sz)
//{
//	assert(arr);
//	int life = 0;
//	int right = sz - 1;
//	while (life<right)
//	{
//		while ((life < right) && arr[life] % 2 == 1)
//		{
//			life++;
//		}
//		while ((life < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if(life < right)
//		{
//			char tmp = arr[life];
//			arr[life] = arr[right];
//			arr[right] = tmp;
//		}
//
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 2,8,5,9,1,5,3,8,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//写一个函数 ，左旋n个字母，将字符串前n个字符放到后面
//#include<assert.h>
//void life_move(char* p, int k)
//{
//	assert(p);
//	int i = 0;
//	int len = strlen(p);
//	for ( i = 0; i < k; i++)
//	{
//		char tmp = *p;
//		int j = 0;
//		for ( j = 0; j < len-1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		(p[len - 1]) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = { 0 };
//	int k = 0;
//	gets(arr);
//	scanf("%d", &k);
//	life_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//三步翻转法逆序字符串
#include<assert.h>
void reverse(char* life, char* right)
{
	assert(life);
	assert(right);
	while (life<right)
	{
		char cmp = *life;
		*life = *right;
		*right = cmp;
		life++;
		right--;
	}
}
void life_move(char* p, int k)
{
	assert(p);
	int len = strlen(p);
	reverse(p, p + (k - 1));
	reverse(p + k, p + (len - 1));
	reverse(p, p + (len - 1));
}
int main()
{
	char arr[20] = { 0 };
	gets(arr);
	int k = 0;
	scanf("%d", &k);
	life_move(arr, k);
	printf("%s\n", arr);
	return 0;
}