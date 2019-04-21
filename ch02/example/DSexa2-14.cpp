#include<iostream>
#include<orderlist.h>
using namespace std;
int main()
{
	int a[] = {1, 2, 3, 5};
	SqList *L;
	CreateList(L, a, 4);
	DispList(L);
	OListInsert(L, 4);
	DispList(L);
	return 0;
}
