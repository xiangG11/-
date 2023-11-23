#include <stdio.h>
#include <malloc.h>
typedef  int  DataType;
typedef  struct  linknode {
	DataType       data;
	struct  linknode   *next;
} LinkList;

LinkList *Initlist() {
	LinkList *head;
	head = (LinkList *)malloc(sizeof(LinkList));
	head->next = NULL;
	return head;
}

void CreatList(LinkList *head, int n) {
	LinkList *s, *last;
	last = head;
	printf("\n==============================\n", n);
	printf("������%d������", n);
	for (int i = 0; i < n; i++) {
		s = (LinkList *)malloc(sizeof(LinkList));
		scanf("%d", &s->data);
		s->next = NULL;
		last->next = s;
		last = s;
	}
	printf("\n==============================\n");
	printf("��������ɹ�");
}

int  LengthList(LinkList  *head) {
	LinkList  *p = head->next;
	int j = 0;
	while (p != NULL) {
		p = p->next;
		j++;
	}
	return  j;
}

void SearchList(LinkList *head, int i) {
	LinkList  *p;
	int j = 0;
	p = head;
	if (i > LengthList(head))
		printf("\n==============================\n");
	printf("λ�ô���������û�и�λ�ã�");
	while (p->next != NULL && j < i) {
		p = p->next;
		j++;
	}
	if (j == i)
		printf("\n==============================\n");
	printf("�ڵ�%dλ�ϵ�Ԫ��ֵΪ%d��", i, p->data);
}

void InsList(LinkList *head, int i, DataType x ) {
	int j = 0;
	LinkList *p, *s;
	p = head;
	while (p->next != NULL && j < i - 1) {
		{
			p = p->next;
			j++;
		}
	}
	if (p != NULL) {
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = x;
		s->next = p->next;
		p->next = s;
		printf("\n==============================\n");
		printf("����Ԫ�سɹ���");
	} else {

		printf("\n==============================\n");
		printf("\n����Ԫ��ʧ��\n");
	}
}

void DelList(LinkList *head, int i) {
	int j = 0;
	DataType x;
	LinkList *p = head, *s;
	while (p->next != NULL && j < i - 1) {
		{
			p = p->next;
			j++;
		}
		if (p->next != NULL && j == i - 1) {
			s = p->next;
			x = s->data;
			p->next = s->next;
			free(s);
			printf("\n==============================\n");
			printf("ɾ����%dλ�ϵ�Ԫ��%d�ɹ���", i, x);
		} else {
			printf("\n==============================\n");
			printf("ɾ�����λ�ô���ɾ��ʧ��");
		}
	}
}

void DispList(LinkList *head) {
	/*��ʾ���������*/
	LinkList *p;
	p = head->next;
	while (p != NULL) {
		printf("%5d", p->data);
		p = p->next;
	}
}

main() {
	LinkList *head;
	DataType x;
	int i, n;

	{

		head = Initlist();
		printf("\n==============================\n");
		printf("������Ҫ�������Ա�ĳ��ȣ�");
		scanf("%d", &n);
		CreatList(head, n); //���ΪCreateListH(L);����ͷ�巨��������
		printf("����������Ա�Ϊ��\n");
		DispList(head);

		printf("\n==============================\n");
		printf("������Ҫ�����Ԫ��λ�ã�");
		scanf("%d", &i);
		getchar();
		printf("\n==============================\n");
		printf("������Ҫ�����Ԫ��ֵ��");
		scanf("%d", &x);
		InsList(head, i, x);
		printf("\n==============================\n");
		printf("����Ԫ��%d������Ա�Ϊ��\n", x);
		DispList(head);

		printf("\n==============================\n");
		printf("������Ҫɾ����Ԫ��λ�ã�");
		scanf("%d", &i);
		DelList(head, i);
		printf("\n==============================\n");
		printf("ɾ����%dλ��Ԫ�غ�����Ա�Ϊ��\n", i);
		DispList(head);

		printf("\n==============================\n");
		printf("��������ҵ�Ԫ��λ�ã����ڵ���1����������");
		scanf("%d", &i);
		SearchList(head, i);

		printf("\n==============================\n");
		printf("�����Ա�ĳ���Ϊ%d��", LengthList(head));

	}
}

