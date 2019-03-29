#include<iostream>
#include<list_dlink.h>
#include<malloc.h>

void CreateListF(DLinkNode * &L, ElemType a[], int n)
{
	DLinkNode *s;
	L = (DLinkNode *)malloc(sizeof(DLinkNode));
	L->next = L->prior = NULL;
	for(int i = 0; i < n; i++)
	{
		s = (DLinkNode *)malloc(sizeof(DLinkNode));
		s->data = a[i];
		s->next = L->next;
		if(L->next != NULL)
			L->next->prior = s;
		L->next = s;
		s->prior = L;
	}
}

