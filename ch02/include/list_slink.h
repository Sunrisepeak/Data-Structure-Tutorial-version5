#ifndef LIST_SLINK_INCLUDE
#define LIST_SLINK_INCLUDE
typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LinkNode;
//Head insert
void CreateListF(LinkNode * &L, ElemType a[], int n);

//尾插法
void CreateListR(LinkNode * &L, ElemType a[], int n);

//Display List
void DispList(LinkNode * L);

//Destroy List
void DestroyList(LinkNode * L);
#endif
