#include<iostream>
#include<list_s.h>
#include<tkit>
using namespace std;
int main()
{
	SqList *L;
	int a[100];
	int b[10][10];
	TData::rdata_generator((address_pointer)a, 1, 10, 50);
	TData::rdata_generator((address_pointer)b, 100, 200, 10, 10);
	CreateList(L, a, 49);
	cout << "len: "<< L->length << endl;
	DispList(L);
	cout << "test rdata " << endl;
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
			cout << b[i][j] << " ";
		putchar('\n');
	}
	return 0;
}
