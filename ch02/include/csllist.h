#ifndef LIST_SLINK_INCLUDE
#define LIST_SLINK_INCLUDE

typedef int ElemType;
typedef struct CSLNode
{
	ElemType data;
	struct CSLNode* next;
}CSLList;

void InitList(CSLList * &L);

//Head insert
void CreateListF(CSLList * &L, ElemType a[], int n);

//尾插法
void CreateListR(CSLList * &L, ElemType a[], int n);

bool ListInsert(CSLList * &L, int i, ElemType e);

bool ListDelete(CSLList * &L, int i, ElemType &e);
#endif
