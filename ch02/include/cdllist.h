#ifndef CDLLIST_INCLUDE
#define CDLLIST_INCLUDE
typedef int ElemType;
typedef struct CDLNode
{
	ElemType data;
	struct CDLNode* next;
	struct CDLNode* prior;
}CDLList;

void InitList(CDLList * &L);

//Head insert
void CreateListF(CDLList * &L, ElemType a[], int n);

//尾插法
void CreateListR(CDLList * &L, ElemType a[], int n);


#endif
