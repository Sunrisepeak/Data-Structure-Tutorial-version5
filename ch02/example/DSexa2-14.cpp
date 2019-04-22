#include<iostream>
#include<list.h>
using namespace std;
void UnionList(SqList * LA, SqList * LB, SqList * &LC)
{
	int i = 0, j = 0, k = 0;
	LC = (SqList *)malloc(sizeof(SqList));	// need &
	while(i < LA->length && j < LB->length)
	{
		if(LA->data[i] > LB->data[j])
			LC->data[k++] = LB->data[j++];
		else
			LC->data[k++] = LA->data[i++];
	}
	while(i < LA->length)
		LC->data[k++] = LB->data[i++];
	while(j < LB->length)
		LC->data[k++] = LB->data[j++];
	LC->length = k;
}

int main()
{
	int a[] = {1, 2, 3, 5};
	int b[] = {2, 3, 4, 5};
	SqList *L1, *L2, *L3;
	CreateList(L1, a, 4);
	CreateList(L2, b, 4);
	DispList(L1);
	DispList(L2);
	cout << "4 Insert to L1:" << endl;
	OListInsert(L1, 4);
	DispList(L1);
	UnionList(L1, L2, L3);
	cout << "UnionList to L1 and L2 of <Sqlist>: " << endl;
	DispList(L3);
	return 0;
}
