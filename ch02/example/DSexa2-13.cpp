#include<iostream>
#include<list.h>
using namespace std;
bool Symm(CDLList *L)
{
		CDLList *p = L->next, *q = L->prior;
		while(q != p && p->next != q)
		{
				cout << p->data << " = " << q->data; putchar('\n');
				if(p->data != q->data)
						return false;
				p = p->next;
				q = q->prior;
		}
		return true;
}
int main()
{
		CDLList *L1, *L2;
		int a[] = {1, 2, 3, 5, 3, 2, 1};
		int b[] = {1, 2, 3, 5, 5, 2, 1};
		CreateListR(L1, a, 7);
		CreateListF(L2, b, 7);
		DispList(L1);
		cout <<Symm(L1) << endl;
		DispList(L2);
		cout << Symm(L2) << endl;
		return 0;
}
