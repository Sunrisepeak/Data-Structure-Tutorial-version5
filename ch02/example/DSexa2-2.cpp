#include<iostream>
#include<list_s.h>
#include<tkit>
using namespace std;
int main()
{
	int a[100];
	TData::rdata_generator((address_pointer)a, 1, 10, 100);
	cout << "resouce data:" << endl;
	for(int i = 0; i < 40; i++)
		cout << a[i] << " ";
	cout << endl;

	SqList *LA, *LB, *LC;
	InitList(LA);
	InitList(LB);

	CreateList(LA, a, 20);
	cout << "LA: " << endl;
	DispList(LA);

	CreateList(LB, a + 20, 20);		//从第51位(a[50])数据生成List
	cout << "LB: " << endl;
	DispList(LB);

	//求并集
	unionList(LA, LB, LC);
	cout << "LC: " << endl;
	DispList(LC);

	return 0;
}
