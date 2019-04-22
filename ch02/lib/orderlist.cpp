#include<orderlist.h>
#include<malloc.h>

void OListInsert(SqList * L, ElemType e)
{
	int i = 0;
	while(i < L->length && L->data[i] < e)
		i++;
	for(int j = L->length; j > i; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i] = e;
	L->length++;
}

void OListInsert(LinkNode * L, ElemType e)
{
	LinkNode *p = L;
	while(p->next != NULL && p->next->data < e)
	{
		p = p->next;
	}
	LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
}
