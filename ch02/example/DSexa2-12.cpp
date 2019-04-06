#include<iostream>
#include<list.h>
using namespace std;
bool deletem(CDLList * &L, ElemType x)
{
	CDLList *p = L->next;
	while(p != L)
	{
		if(p->data == x)
		{
			p->prior->next = p->next;
			p->next->prior = p->prior;
			free(p);
			return true;
		}
		p = p->next;
	}
	return false;
}

int main()
{
	CDLList *L;
	char *a = "00001111000011110000"; 
	CreateListR(L, (int *)a, 5);
	DispList(L);
	deletem(L,'1111');
	DispList(L);
	return 0;
}
