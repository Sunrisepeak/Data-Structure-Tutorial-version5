#include<iostream>
#include<list_slink.h>
#include<malloc.h>
void split(LinkNode * &L, LinkNode * &L1, LinkNode * &L2)
{
	LinkNode *p = L->next, *q, *r1;
	L1 = L;
	r1 = L1;
	L2 = (LinkNode *)malloc(sizeof(LinkNode));
	L2->next = NULL;
	while(p != NULL)
	{
		r1->next = p;
		r1 = p;
		p = p->next;
		q = p->next;
		p->next = L2->next;
		L2->next = p;
		p = q;
	}
	r1->next = NULL;
}
int main()
{
	LinkNode *L;
	int a[] = {1,2,3,4,5,6,7,8};
	CreateListR(L, a, 8);
	DispList(L);
//	LinkNode L1, L2;
//	split(L, (LinkNode*)&L1, (LinkNode*)&L1)  // 这里不能定义传内存中没有的强制类型的地址指针，因为引用的必须是个对象(内存中存在)	
	LinkNode *L1, *L2;
	split(L, L1, L2); 
	DispList((LinkNode*)&L1);
	DispList((LinkNode*)&L2);
	return 0;
}
