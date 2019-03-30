#include<iostream>
#include<list_sdlink.h>
#include<tkit>
using namespace std;
int  delMaxNode(LinkNode * &L)
{
	if(L->next == NULL)
		return -1;
	LinkNode *p = L->next, *maxp = p, *maxpre = L, *pre = L;
	while(p != NULL)
	{
		if(p->data > maxp->data)
		{
			maxp = p;
			maxpre =  pre;
		}
		pre = p;
		p = p->next;
	}
	int e = maxp->data;
	maxpre->next = maxp->next;
	free(maxp);
	return e;
}
int main()
{
	int a[100];
	LinkNode *L;
	TData::rdata((address_pointer)a, 1, 100, 40);
	CreateListR(L, a, 20);
	DispList(L);
	cout << "delete of max_number is : "<< delMaxNode(L) << endl;
	DispList(L);
	return 0;
}
