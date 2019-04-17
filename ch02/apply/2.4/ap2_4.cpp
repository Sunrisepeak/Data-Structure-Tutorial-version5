#include<iostream>
#include<njoin.h>
using namespace std;
int main()
{
	HNode *h1, *h2, *h;
	cout << "Table1:\n";
	CreateTable(h1);
	cout << "Table2:\n";
	CreateTable(h2);

	DispTable(h1);
	cout << endl;
	DispTable(h2);

	LinkTable(h1, h2, h);
	cout << "link of Table result:" << endl;
	DispTable(h);
	DestroyTable(h1);
	DestroyTable(h2);
	DestroyTable(h);
	return 0;
}
