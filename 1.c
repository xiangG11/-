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
	printf("请输入%d个整数", n);
	for (int i = 0; i < n; i++) {
		s = (LinkList *)malloc(sizeof(LinkList));
		scanf("%d", &s->data);
		s->next = NULL;
		last->next = s;
		last = s;
	}
	printf("\n==============================\n");
	printf("建立链表成功");
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
	printf("位置错误，链表中没有该位置！");
	while (p->next != NULL && j < i) {
		p = p->next;
		j++;
	}
	if (j == i)
		printf("\n==============================\n");
	printf("在第%d位上的元素值为%d！", i, p->data);
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
		printf("插入元素成功！");
	} else {

		printf("\n==============================\n");
		printf("\n插入元素失败\n");
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
			printf("删除第%d位上的元素%d成功！", i, x);
		} else {
			printf("\n==============================\n");
			printf("删除结点位置错误，删除失败");
		}
	}
}

void DispList(LinkList *head) {
	/*显示输出链表函数*/
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
		printf("请输入要建立线性表的长度：");
		scanf("%d", &n);
		CreatList(head, n); //如改为CreateListH(L);则用头插法建立链表
		printf("建立后的线性表为：\n");
		DispList(head);

		printf("\n==============================\n");
		printf("请输入要插入的元素位置：");
		scanf("%d", &i);
		getchar();
		printf("\n==============================\n");
		printf("请输入要插入的元素值：");
		scanf("%d", &x);
		InsList(head, i, x);
		printf("\n==============================\n");
		printf("插入元素%d后的线性表为：\n", x);
		DispList(head);

		printf("\n==============================\n");
		printf("请输入要删除的元素位置：");
		scanf("%d", &i);
		DelList(head, i);
		printf("\n==============================\n");
		printf("删除第%d位的元素后的线性表为：\n", i);
		DispList(head);

		printf("\n==============================\n");
		printf("请输入查找的元素位置（大于等于1的整数）：");
		scanf("%d", &i);
		SearchList(head, i);

		printf("\n==============================\n");
		printf("该线性表的长度为%d！", LengthList(head));

	}
}

