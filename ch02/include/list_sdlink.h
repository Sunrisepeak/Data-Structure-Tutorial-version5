/*
 this is single link and double link shared part
 
 */


#ifndef LIST_SDLINK_INCLUDE
#define LIST_SDLINK_INCLUDE

#include<list_slink.h>
#include<list_dlink.h>


//Display List
void DispList(void* L);

//Destroy List
void DestroyList(LinkNode * L);

bool ListEmpty(LinkNode *L);

int ListLength(LinkNode *L);

bool GetElem(LinkNode *L, int i, ElemType &e);

int LocateElem(LinkNode *L, ElemType e);

#endif
