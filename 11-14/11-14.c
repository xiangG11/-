#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	/*while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}*/
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (1==((a >> i) & 1) )
//		{
//			count++;
//
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "Welcome to Henan!!!";
//	char arr2[] = "###################";
//	int lift = 0;
//	int right = strlen(arr1)-1;
//	while (lift<=right)
//	{
//		arr2[lift] = arr1[lift];
//		arr2[right] = arr1[right];
//		lift++;
//		right--;
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char password[20] = {0};
//	int i = 0;
//	
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码：>\n");
//		scanf("%s\n", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//			printf("密码错误，请重新输入！\n");
//	}
//		if(i==3)
//		{
//			printf("登陆失败！\n");
//		}
//	return 0;
//}
//int main()
//{
//	int m, n;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		i = m % n;
//		m = n;
//		n = i;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int year1,year2;
//	int i = 0;
//	printf("请输出两个年份：>");
//	scanf("%d%d", &year1, &year2);
//	for ( i = year1; i <= year2; i++)
//	{
//		if ((i%4 == 0 && i%100 != 0) || i%400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	int num[20] = {1,4,3,7,5,9,2 };
//	
//	int i = 0;
//	int max = 0;
//	int ze = sizeof(num) / sizeof(num[0]);
//	for ( i = 0; i < ze; i++)
//	{
//		if (num[i] > max)
//		{
//			max = num[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int i, j;
//	int c = 0;
//	for ( i = 1; i < 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			c = i * j;
//			printf("%d*%d=%-2d ", j, i, c);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdlib.h>
#include<time.h>
void nume()
{
	printf("#####################\n");
	printf("## 1,play  2,exit ###\n");
	printf("#####################\n");
}
void game()
{
	int cai = 0;
	int ret = rand() % 100 + 1;
	printf("请输入所猜数字:");
	
	while (1)
	{
		scanf("%d", &cai);
		if (cai > ret)
		{
			printf("猜大了！\n");
		}
		else if(cai<ret)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}

}
int main()
{
	int shu = 0;
	srand((unsigned int)time(NULL));
	do
	{
		nume();
		printf("请选择");
		scanf("%d", &shu);
		switch (shu)
		{
		case 0:printf("退出游戏！！！");
			break;
		case 1:printf("游戏开始！！！");
			game();
			break;
		default:printf("请重新输入");
			break;
		}
	} while (shu);
}