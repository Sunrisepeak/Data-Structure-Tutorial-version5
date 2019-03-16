#include<iostream>
#include<tkit>
#include<list_s.h>
using namespace std;
void move1(SqList * &L)
{
	int i = 0, j = L->length - 1;
	int pivot = L->data[j];
	while(i < j)
	{
		while(i < j && L->data[i] % 2 != 0)
			i++;
		L->data[j] = L->data[i];
		while(i < j && L->data[j] % 2 == 0)
			j--;
		L->data[i] = L->data[j];
	}
	L->data[i] = pivot;
}
void move2(SqList * &L)
{
	int k = -1;
	for(int i = 0; i < L->length; i++)
	{
		if(L->data[i] % 2 != 0)
		{
			k++;		//count odd number
			TData::swap(L->data[i], L->data[k]);
		}
	}
}
int main()
{
	SqList *L;
	InitList(L);
	int a[100];
	TData::rdata((address_pointer)a,1,20,50);
	CreateList(L, a, 50);
	DispList(L);

	cout << "move1: " << endl;
	move1(L);
	DispList(L);

	CreateList(L, a, 50);
	cout << "move2: " << endl;
	move2(L);
	DispList(L);
	return 0;
}
