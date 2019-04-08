#include<cdllist.h>
#include<malloc.h>

void CreateListF(CDLList * &L, ElemType a[], int n)
{
	CDLList *s;
	L = (CDLList *)malloc(sizeof(CDLList));
	L->next = L->prior = L;
	for(int i = 0; i < n; i++)
	{
		s = (CDLList *)malloc(sizeof(CDLList));
		s->data = a[i];
		s->next = L->next;
		L->next->prior = s;
		L->next = s;
		s->prior = L;
	}
}

void CreateListR(CDLList * &L, ElemType a[], int n)
{
	CDLList *s, *r;
	L = (CDLList *)malloc(sizeof(CDLList));
	L->next = L->prior = L;
	r = L;
	for(int i = 0; i < n; i++)
	{
		s = (CDLList *)malloc(sizeof(CDLList));
		s->data = a[i];
		r->next = s;
		s->prior = r;
		r = s;
	}
	r->next = L;
	L->prior = r;
}

