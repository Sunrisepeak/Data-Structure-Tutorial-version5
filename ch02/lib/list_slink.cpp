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
