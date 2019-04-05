#include<iostream>
#include<list.h>
#include<tkit>
using namespace std;
int count(CSLList *L, int x)
{
	CSLList *p = L->next;
	int k = 0;
	while(p != L)
	{
		if(p->data == x)
			k++;
		p = p->next;
	}
	return k;
}
int main()
{
	int a[20];
	TData::rdata(a, 1, 5, 20);
	CSLList *L;
	CreateListR(L, a, 15);
	DispList(L);
	int x;
	cin >> x;
	cout << x <<"'s amount is " << count(L, x);
	putchar('\n');
	return 0;
}
