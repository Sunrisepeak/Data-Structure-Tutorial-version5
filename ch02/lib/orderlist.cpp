#include<orderlist.h>
#include<malloc.h>

void OListInsert(SqList * L, ElemType e)
{
	int i = 0;
	while(i < L->length && L->data[i] < e)
		i++;
	for(int j = L->length; j > i; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i] = e;
	L->length++;
}	
