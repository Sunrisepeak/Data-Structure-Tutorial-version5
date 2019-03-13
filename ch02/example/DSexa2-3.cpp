/*
 *example2-3 test programmer, following code need rely on lib that 
 *is locate in directory './lib' and './include'
 */
#include<cstdio>
#include"list_s.h"
int main()
{
    SqList *L;
	int a[] = {2, 3, 4, 2, 1, 3, 4, 5, 1, 3, 3, 2, 1};
	CreateList(L, a, 13);
	DispList(L);
	deletenode1(L, 1);
	DispList(L);
	deletenode2(L, 2);
	DispList(L);
	deletenode3(L, 3);
	DispList(L);
   	return 0;
}
