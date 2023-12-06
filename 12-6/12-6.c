#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100      /*���Ա������Ԫ�ظ���*/
typedef int KeyType;     /*�ؼ�������*/
typedef struct
{
    KeyType Key;          /*�ؼ�����*/
}LineList;               /*���Ա�Ԫ������*/

void InsertSort(LineList r[], int n)
{   /*ֱ�Ӳ���������*/
    int i, j;
    for (i = 2; i <= n; i++)/*�ӵ�2��Ԫ�ؿ�ʼ���β嵽ǰ�����ź�������*/
    {
        r[0] = r[i];      /*r[0]��Ϊ������*/
        j = i - 1;
        while (r[0].Key < r[j].Key)
        {  /*��Ҫ����Ԫ��С��jλ��Ԫ�أ������jλ��Ԫ��*/
            r[j + 1] = r[j];
            j = j - 1;
        }
        r[j + 1] = r[0];  /*��ԭ��r[i]�еļ�¼�����j+1���ճ���λ��*/
    }
}

void ShellSort(LineList r[], int n)
{ /*ϣ�������㷨����*/
    int i, j, d;
    d = n / 2;                    /*��ʼ����Ϊ����һ��*/
    while (d > 0)
    {
        for (i = d; i <= n; i++)
        {
            r[0] = r[i];          /*�������*/
            j = i - d;
            while (j >= 0 && r[0].Key < r[j].Key)
            {
                r[j + d] = r[j];
                j = j - d;
            }
            r[j + d] = r[0];
            j = j - d;
        }
        d = d / 2;
    }
}


void Merge(LineList r[], int low, int mid, int high)
{  /*�鲢�����������������εĺϲ�����*/
    LineList* r1;
    int i = low, j = mid + 1, k = 1; /*k��r1���±�,i,j�ֱ�Ϊ��1,2�ε��±�*/
    r1 = (LineList*)malloc((high - low + 1) * sizeof(LineList));
    while (i <= mid && j <= high)
        if (r[i].Key <= r[j].Key)
            r1[k++] = r[i++];
        else
            r1[k++] = r[j++];
    while (i <= mid)
        r1[k++] = r[i++];
    while (j <= high)
        r1[k++] = r[j++];
    for (k = 1, i = low; i <= high; k++, i++)
        r[i] = r1[k];
}

void MergePass(LineList r[], int length, int n)
{  /*���һ�������ĺϲ�����*/
    int i;
    for (i = 1; i + 2 * length - 1 <= n; i = i + 2 * length) /*�鲢length�����������ӱ�*/
        Merge(r, i, i + length - 1, i + 2 * length - 1);
    if (i + length - 1 <= n)
        Merge(r, i, i + length - 1, n);
}

void MergeSort(LineList r[], int n)
{  /*�鲢�����㷨*/
    int length;
    for (length = 1; length <= n; length = 2 * length)
        MergePass(r, length, n);
}

void OutList(LineList r[], int n)
{
    int i;
    printf("�����ļ�¼Ϊ��");
    for (i = 1; i <= n; i++)
        printf("%5d", r[i]);
}
void OutListt(LineList r[], int n)
{
    int i;
    printf("����������Ϊ��");
    for (i = 1; i <= n; i++)
        printf("%5d", r[i]);
}

void  MenuSort()
{   /*��ʾ�˵��Ӻ���*/
    printf("\n                    ������ϵͳ");
    printf("\n==================================================");
    printf("\n|               1����������������                |");
    printf("\n|               2����ֱ�Ӳ�������                |");
    printf("\n|               3����ϣ������                    |");
    printf("\n|               4�����鲢����                    |");
    printf("\n|               0��������                        |");
    printf("\n==================================================");
    printf("\n������˵��ţ�0-4��:");
}

main()
{
    int i, n;
    LineList  r[MAXSIZE];
    char  ch1, ch2, a;
    ch1 = 'y';
    while (ch1 == 'y' || ch1 == 'Y')
    {
        MenuSort();
        scanf("%c", &ch2);
        getchar();
        switch (ch2)
        {
        case  '1':
            printf("������������ĳ��ȣ�");
            scanf("%d", &n);
            printf("������%d��������", n);
            for (i = 1; i <= n; i++)
                scanf("%d", &r[i]);
            OutListt(r, n);
            break;
        case  '2':
            InsertSort(r, n);
            printf("����ֱ�Ӳ�������");
            OutList(r, n);
            break;
        case  '3':
            ShellSort(r, n);
            printf("����ϣ����������");
            OutList(r, n);
            break;

        case  '4':
            MergeSort(r, n);
            printf("���й鲢����");
            OutList(r, n);
            break;
        case  '0':
            ch1 = 'n';
            break;
        default:
            printf("��������������0-9����ѡ��");
        }
        if (ch2 != '0')
        {
            printf("\n���س�����������������������˵���\n");
            a = getchar();
            if (a != '\xA')
            {
                getchar(); ch1 = 'n';
            }
        }
    }
}

