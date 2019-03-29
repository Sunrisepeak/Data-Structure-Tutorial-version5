#ifndef LIST_DLINK_INCLUDE
#define LIST_DLINK_INCLUDE
typedef int ElemType;
typedef struct DNode DLinkNode;
struct DNode{
	ElemType data;
	struct DNode *prior;
	struct DNode *next;
}

void CreateListF(DLinkNode * &L, ElemType a[], int n);


#endif
