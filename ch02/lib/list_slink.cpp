#include<list_slink.h>
#include<iostream>
#include<malloc.h>
void CreateListF(LinkNode * &L, ElemType a[], int n)
{
	LinkNode *s;
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next = NULL;
	for(int i = 0; i < n; i++)
		{
			s = (LinkNode *)malloc(sizeof(LinkNode));
			s->data = a[i];
			s->next = L->next;
			L->next = s;
		}
}

void CreateListR(LinkNode * &L, ElemType a[], int n)
{
	LinkNode *s, *r;
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next = NULL;
	r = L;
	for(int i = 0; i < n; i++)
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

void InitList(LinkNode * &L)
{
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next = NULL;		//create head_node and set NULL to its next
}

bool ListInsert(LinkNode * &L, int i, ElemType e)
{
	if(i < 1)
		return false;
	LinkNode *p = L;
	int k = 0;
	while(k < i - 1 && p != NULL)
		{
			p = p->next;
			k++;
		}
	if(p == NULL)
		return false;
	else
		{
			LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
			s->data = e;
			s->next = p->next;
			p->next = s;
			return true;
		}
}

bool ListDelete(LinkNode * &L, int i, ElemType &e)
{
	int j = 0;
	LinkNode *p = L, *q;
	if(i <= 0)
		return false;
	while(j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if(p == NULL)
		return false;
	else
	{
		q = p->next;
		if(q == NULL)
			return false;
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}


