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

void DispList(LinkNode *L)
{
	LinkNode *p = L->next;
	while(p != NULL)
		{
			printf("%d ", p->data);
			p = p->next;
		}
	putchar('\n');
}

void DestroyList(LinkNode *L)
{
	LinkNode *p = L->next;
	while(p != NULL)
		{
			free(L);
			L = p;
			p = p->next;
		}
	free(L);
}

void InitList(LinkNode * &L)
{
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next = NULL;		//create head_node and set NULL to its next
}

bool ListEmpty(LinkNode *L)
{
	return L->next == NULL;
}

int ListLength(LinkNode *L)
{
	LinkNode *p = L->next;
	int n = 0;
	while(p != NULL)
		{
			n++;
			p = p->next;
		}
	return n;
}

bool GetElem(LinkNode *L, int i, ElemType &e)
{
	if(i < 1)	//linklist, only jugde its low
		return false;
	LinkNode *p = L;
	int j = 0;
	while(j < i && p != NULL)
		{
			j++;
			p = p->next;
		}
	if(p == NULL)
		return false;
	e = L->data;
	return true;
}

int LocateElem(LinkNode *L, ElemType e)
{
	LinkNode *p = L->next;
	int k = 1;
	while(p != NULL && p->data != e)
		{
			p = p->next;
			k++;
		}
	if(p == NULL)
		return 0;
	else
		return k;
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


