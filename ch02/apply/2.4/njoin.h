/*
implement table's nature join by linear list of material structure of link list and sequence list
 */
#ifndef NJOIN_INCLUDE
#define NJOIN_INCLUDE
#define MaxCol 20
typedef int ElemType;
//Row node 
typedef struct RNode{
	ElemType data[MaxCol];
	struct RNode * next;
}RList;

//head node of struct
typedef struct HNode{
	int Row, Col; //record  table of R and C
	RList * next;
}HList;

void CreateTable(HList * &h);

void DestroyTable(HList * &h);

void DispTable(HList *h);

void LinkTable(HList * h1, HList * h2, HList * &h);

#endif
