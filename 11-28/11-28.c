#include<stdio.h>
//int add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int arr[] = { 0 };
//	int(*p)[] = &arr;//����ָ��
//	int(*pc)(int, int) = &add;//����ָ��
//	printf("%p\n", arr);
//	printf("%p\n", add);
//	printf("%p\n", &add);
//	printf("%d\n", add(3, 5));
//	printf("%d\n", pc(3,5));
//	return 0;
//}
//void print(char* p)
//{
//	printf("%s\n", p);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	p("hello world!!");
//	return 0;
//}
//int main()
//{
//	(*(void(*)())0)();//����ǿ������ת��Ϊ����ָ�룬�����øú�����
//	void(*signal(int, void(*)(int)))(int);//һ������ֵΪvoid(*)(int)�ĺ���signal�Ķ��壬����һ��Ϊint,һ��Ϊvoid(*)(int).
//	typedef void(*v_t)(int);//����������
//	v_t signal(int, v_t);
//	return 0;
//}
//void print(int a)
//{
//	printf("%d\n", a);
//}
//int main()
//{
//	void(*p)(int) = print;
//	p(3);
//	(*p)(3);
//	(**p)(3);
//	return 0;
//}
//����ָ������
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*p[])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for ( i = 0; i <= 3; i++)
//	{
//		printf("%d\n", p[i](3, 4));
//	}
//	return 0;
//}
//����ָ�������������
//void nume()
//{
//	printf("##############################\n");
//	printf("###  1.add      2.sub     ####\n");
//	printf("###  3.mul      4.div     ####\n");
//	printf("###       0.exit          ####\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int iquit = 0;
//	////int x = 0;
//	int y = 0;
//	int(*p[])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		nume();
//		printf("��ѡ��>");
//		scanf("%d", &iquit);
//		
//		if (iquit>=1&&iquit<=4)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", p[iquit](x, y));
//		}
//		else if (iquit==0)
//		{
//			printf("������\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	} while (iquit);
//	return 0;
//}
//ָ����ָ�������ָ��
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[] = { 0 };
	int(*p)[] = arr;//����ָ��
	int(*pc[])(int, int) = { add };//����ָ������
	int(*(*ppc)[])(int, int) = pc;//����ָ�������ָ��
	return 0;
}