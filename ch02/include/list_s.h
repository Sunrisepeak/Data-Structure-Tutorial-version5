#ifndef LIST_S_H
#define LIST_S_H
typedef int ElemType;
const int MaxSize = 1000;
typedef struct
{
    ElemType data[MaxSize];
    int length;
}SqList;

void CreateList(SqList * &L, ElemType a[], int n);

void InitList(SqList * &L);

void DestoryList(SqList * &L);

bool ListEmpty(SqList * &L);

int ListLength(SqList * L);

void DispList(SqList * L);

bool GetElem(SqList * L, int i, ElemType &e);

int LocateElem(SqList * L, ElemType e);

bool ListInsert(SqList * &L, int i, ElemType e);

bool ListDelete(SqList * &L, int i, ElemType &e);

/*-------------------example about chapter2----------------*/

//example 2-2
void unionList(SqList * LA, SqList * LB, SqList * &LC);

//example 2-3
void deletenode1(SqList * &L, ElemType x);

void deletenode2(SqList * &L, ElemType x);

void deletenode3(SqList * &L, ElemType x);

#endif
