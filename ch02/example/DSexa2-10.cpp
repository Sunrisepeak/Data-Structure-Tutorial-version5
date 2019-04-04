#include<iostream>
#include<list_sdlink.h>
#include<tkit>
using namespace std;
void sort(DLinkNode * &L)
{
	DLinkNode *p = L->next, *q, *pre;
	L->next = NULL;
	while(p != NULL)
	{
		q = p->next;
		pre = L;
		while(pre->next != NULL && pre->next->data < p->data)	//find in front if node
			pre = pre->next;
		if(pre->next != NULL)
			pre->next->prior = p;
		p->next = pre->next;
		p->prior = pre;
		pre->next = p;
		p = q;
	}
}
int main()
{
	int a[40];
	TData::rdata(a, 20, 30, 40);
	DLinkNode *L;
	CreateListR(L, a, 40);
	DispList(L);
	sort(L);
	DispList(L);
	return 0;
}
