#include<iostream>
#include<list_s.h>
#include<tkit>
using namespace std;
void partition1(SqList * &L)
{
	int i = 0, j = L->length - 1;
	ElemType pivot = L->data[0];
	while(i < j)
	{
		while(i < j && pivot < L->data[j])
			j--;
		while(i < j && pivot >= L->data[i])
			i++;
		if(i < j)
			TData::swap(L->data[j], L->data[i]);
	}
	TData::swap(L->data[0], L->data[i]);
}

void partition2(SqList * &L)
{
	int i = 0, j = L->length - 1;
	int pivot = L->data[0];
	while(i < j)
	{
		while(i < j && L->data[j] > pivot)
			j--;
		L->data[i] = L->data[j];
		while(i < j && L->data[i] <= pivot)
			i++;
		L->data[j] = L->data[i];
	}
	L->data[i] = pivot;
}
int main()
{
	SqList *L;
	int a[100];
	TData::rdata((address_pointer)a, 0, 20, 100);
	CreateList(L, a, 40);
	DispList(L);
	
	cout << "partition1: " << L->data[0]<<endl;
	partition1(L);
	DispList(L);

	
	CreateList(L, a, 40);
	cout << "partition2: " << L->data[0]<<endl;
	partition2(L);
	DispList(L);
	return 0;
}
