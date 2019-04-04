#include<cllist.h>
#include<iostream>
#include<malloc.h>
void CreateListF(CSLList * &L, ElemType a[], int n)
{
	CSLList *s;
	L = (CSLList *)malloc(sizeof(CSLList));
	L->next = L;
	for(int i = 0; i < n; i++)
		{
			s = (CSLList *)malloc(sizeof(CSLList));
			s->data = a[i];
			s->next = L->next;
			L->next = s;
		}
}

void CreateListR(CSLList * &L, ElemType a[], int n)
{
	CSLList *s, *r;
	L = (CSLList *)malloc(sizeof(CSLList));
	L->next = L;
	r = L;
	for(int i = 0; i < n; i++)
	{
		s = (CSLList *)malloc(sizeof(CSLList));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = L;
}

void InitList(CSLList * &L)
{
	L = (CSLList *)malloc(sizeof(CSLList));
	L->next = L;		//create head_node and set L to its next
}

bool ListInsert(CSLList * &L, int i, ElemType e)
{
	if(i < 1)
		return false;
	CSLList *p = L;
	int k = 0;
	while(k < i - 1 && p->next != L)
		{
			p = p->next;
			k++;
		}
	if(p->next == L)
		return false;
	else
		{
			CSLList *s = (CSLList *)malloc(sizeof(CSLList));
			s->data = e;
			s->next = p->next;
			p->next = s;
			return true;
		}
}

bool ListDelete(CSLList * &L, int i, ElemType &e)
{
	int j = 0;
	CSLList *p = L, *q;
	if(i <= 0)
		return false;
	while(j < i - 1 && p->next != L)
	{
		j++;
		p = p->next;
	}
	if(p->next == L)
		return false;
	else
	{
		q = p->next;
		if(q->next == L)
			return false;
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}


