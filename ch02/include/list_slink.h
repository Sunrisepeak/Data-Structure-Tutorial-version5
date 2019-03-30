#ifndef LIST_SLINK_INCLUDE
#define LIST_SLINK_INCLUDE

typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LinkNode;

void InitList(LinkNode * &L);

//Head insert
void CreateListF(LinkNode * &L, ElemType a[], int n);

//尾插法
void CreateListR(LinkNode * &L, ElemType a[], int n);

bool ListInsert(LinkNode * &L, int i, ElemType e);

bool ListDelete(LinkNode * &L, int i, ElemType &e);
#endif
