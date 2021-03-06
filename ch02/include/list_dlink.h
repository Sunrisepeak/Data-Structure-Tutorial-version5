#ifndef LIST_DLINK_INCLUDE
#define LIST_DLINK_INCLUDE
typedef int ElemType;
typedef struct DNode DLinkNode;
struct DNode{
	ElemType data;
	struct DNode *next;		// must local on secend because of DispList(void*)
	struct DNode *prior;	// can run
};

void CreateListF(DLinkNode * &L, ElemType a[], int n);

void CreateListR(DLinkNode * &L, ElemType a[], int n);


#endif
