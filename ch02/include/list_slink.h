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

//Display List
void DispList(LinkNode * L);

//Destroy List
void DestroyList(LinkNode * L);

bool ListEmpty(LinkNode *L);

int ListLength(LinkNode *L);

bool GetElem(LinkNode *L, int i, ElemType &e);

#endif
