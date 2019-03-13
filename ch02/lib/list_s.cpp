#include<cstdio>
#include<malloc.h>
#include"list_s.h"
void CreateList(SqList * &L, ElemType a[], int n)
{
    L = (SqList *)malloc(sizeof(SqList));
    for(int i = 0; i < n; i++)
        L->data[i] = a[i];
    L->length = n;
}

void InitList(SqList * &L)
{
    L = (SqList *)malloc(sizeof(SqList));
    L->length = 0;
}

void DestoryList(SqList * &L)
{
    free(L);
}

bool ListEmpty(SqList * L)
{
    return L->length ? true : false;
}

int ListLength(SqList * L)
{
    return L->length;
}
void DispList(SqList * L)
{
    for(int i = 0; i < L->length; i++)
        printf("%d ", L->data[i]);
    putchar('\n');
}

bool GetElem(SqList * L, int i, ElemType &e)
{
	if(i < 1 || i > L->length)
		return false;
	e = L->data[i - 1];
	return true;
}

int LocateElem(SqList * L, ElemType e)
{
	for(int i = 0; i < L->length; i++)
		if(L->data[i] == e)
			return i + 1;
	return 0;
}

bool ListInsert(SqList * &L, int i, ElemType e)
{
	if(i > L->length + 1 || i < 1)
		return false;
	for(int j = L->length; j >= i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i - 1] = e;
	L->length++;
	return true;
}

bool ListDelete(SqList * &L, int i, ElemType &e)
{
	if(i < 1 || i > L->length)
		return false;
	e = L->data[i - 1];
	for(int j = i - 1; j < L->length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->length--;
	return true;
}

/*----------------------code about example 2-*(chapter2)------------------------*/
////example2-2
void unionList(SqList * LA, SqList * LB, SqList * &LC)
{
	InitList(LC);		//init list LC
	int i, e;
	int maxlen = LA->length > LB->length ? LA->length : LB->length;
	for(i = 1; i <= maxlen; i++)
	{
		if(GetElem(LA, i, e) && !LocateElem(LC, e))
			ListInsert(LC, LC->length + 1, e);
		if(GetElem(LB, i, e) && !LocateElem(LC, e))		//Get e and,jugde e belong LA
			ListInsert(LC, LC->length + 1, e);
	}
}
////example2-3
//ans1
void deletenode1(SqList * &L, ElemType x)
{
	int newlength = 0;
	for(int i = 0; i < L->length; i++)
		if(L->data[i] != x)
			L->data[newlength++] = L->data[i];
	L->length = newlength;
}

//ans2
void deletenode2(SqList * &L, ElemType x)
{
	int k = 0, i = 0; 			// (k)Statistics is equal to value of 'x'
	while(i < L->length)
	{
		if(L->data[i] == x)
			k++;
		else
			L->data[i - k] = L->data[i];
		i++;
	}
	L->length -= k;
}

//my ans_3
//swap_times is based on number of x's
void deletenode3(SqList * &L, ElemType x)
{
	for(int i = 0; i < L->length; i++)
		if(L->data[i] == x)
		{
			while(L->data[L->length - 1] == x)
				L->length--;
			L->data[i] = L->data[--(L->length)];
		}
}

