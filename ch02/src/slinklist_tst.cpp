#include<iostream>
#include<tkit>
#include<list_slink.h>
#include<iterator>
using namespace std;
int main()
{
	int a[50];
	TData::rdata((address_pointer)a, 1, 10, 50);
	for(auto i : a)
		cout << i << " ";
	cout << endl;

	LinkNode *L;
	CreateListF(L, a, 20);
	DispList(L);
	DestroyList(L);
	DispList(L);
	return 0;
}
