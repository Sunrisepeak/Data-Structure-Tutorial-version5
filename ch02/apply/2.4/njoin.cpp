#include<iostream>
#include<njoin.h>
#include<malloc.h>

void CreateTable(HList * &h)
{
	int i, j;
	RList *r, *s;
	h = (HList *)malloc(sizeof(HList));
	printf("Table's row and col:");
	std::cin >> h->Row >> h->Col;	//input row and col;
	for(i = 0; i < h->Row; i++)
	{
		printf("%dRow:", i+1);
		s = (RList *)malloc(sizeof(RList));	//each Row's head node
		for(j = 0; j < h->Col; j++)
			std::cin >> s->data[j];
		if(h->next == NULL)
			h->next = s;
		else
			r->next = s;
		r = s;
	}
	r->next = NULL;
}

void DispTable(HList *h)
{
	RList *p = h->next;
	while(p != NULL)
	{
		for(int i = 0; i < h->Row; i++){
			for(int j = 0; j < h->Col; j++)
				printf("%4d", p->data[j]);
			putchar('\n');
			p = p->next;
		}
	}
}



