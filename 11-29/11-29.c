#include<stdio.h>
//用qsort库函数实现冒泡排序
//#include<stdlib.h>
//#include<string.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void text1()//整型数组排序
//{
//	int arr[] = { 4,3,8,7,2,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d \n", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void text2()//浮点型数组排序
//{
//	float frr[] = { 4.6,5.3,7.34,2.1,9.1,8.9};
//	int sz = sizeof(frr) / sizeof(frr[0]);
//	qsort(frr, sz, sizeof(frr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf \n", frr[i]);
//	}
//}
//struct str
//{
//	char name[10];
//	int age;
//};
//int cmp_s_name(const void* e1, const void* e2)
//{
//	return strcmp( ((struct str*)e1)->name, ((struct str*)e2)->name);
//}
////int cmp_s_age(const void* e1, const void* e2)
////{
////	return ((struct str*)e1)->age - ((struct str*)e2)->age;
////}
//void text3()//结构体类型排序
//{
//	struct str s[] = { {"zhangsan",18},{"lisi",20},{"wangwu",12} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_s_name);
//	//qsort(s, sz, sizeof(s[0]), cmp_s_age);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//
//
//int main()
//{
//	text1();
//	text2();
//	text3();
//	return 0;
//}
////struct str
////{
////	char name[10];
////	int age;
////};
////int main()
////{
////	struct str s[] = { {"zhangsan",18},{"lisi",20},{"wangwu",12} };
////	printf("%s \n", s[0].name);
////	printf("%s %d ", s[0].name,s[0].age);
////	return 0;
////}
//写一段代码判断机器的字节序
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}