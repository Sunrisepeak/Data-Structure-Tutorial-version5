/*
 this is single link_list and double link list of implement for them shared part.
 
 */

#include<list_sdlink.h>
#include<iostream>
#include<malloc.h>

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

