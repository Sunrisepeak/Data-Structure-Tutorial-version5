#include<iostream>
#include<list_sdlink.h>
using namespace std;
void reverse(DLinkNode * &L)
{
	DLinkNode *p = L->next, *q;
	L->next = NULL;
	while(p != NULL)
	{
		q = p->next;	//save next Node
		p->next = L->next;
		if(L->next != NULL)	//judge
			L->next->prior = p;
		p->prior = L;
		L->next = p;
		p = q;			//move next Node
	}
}
int main()
{
	DLinkNode *L;
	int a[] = {1,2,3,4,5,6,7,8,9};
	CreateListR(L, a, 9);
	DispList(L);
	reverse(L);
	DispList(L);
	return 0;
}
