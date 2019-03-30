#include<iostream>
#include<list_sdlink.h>
#include<tkit>
using namespace std;
void sort(LinkNode * &L)
{
	if(L->next != NULL)
	{
		LinkNode *p = L->next, *q;
		LinkNode *pre;
		L->next = NULL;
		while(p != NULL)
		{//scan new_L list and  insert element by Insert_First method
			q = p->next;
			pre = L;
			while(pre->next != NULL && pre->next->data < p->data)
				pre = pre->next;
			p->next = pre->next;
			pre->next = p;
			p = q;
		}
		
	}
}
int main()
{
	int a[100];
	TData::rdata(a, 1, 100, 50);
	LinkNode *L;
	CreateListR(L, a, 30);
	DispList(L);
	sort(L);
	DispList(L);
	return 0;
}
