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

void DestroyTable(HList * &h)
{
	RList *pre = h->next, *p = pre->next;
	while(p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
	free(h);
}

void LinkTable(HList * h1, HList *h2, HList * &h)
{
	RList *p = h1->next, *q, *s, *r;
	std::cout << "link field(First Second):";
	int i, j, k;
	scanf("%d%d", &i, &j);
	h = (HList *)malloc(sizeof(HList));
	h->Row = 0;
	h->Col = h1->Col + h2->Col;
	h->next = NULL;
	while(p != NULL)
	{
		q = h2->next;
		while(q != NULL)
		{
			if(p->data[i - 1] == q->data[j - 1])
			{
				s = (RList *)malloc(sizeof(RList));
				for(k = 0; k < h1->Col; k++)
					s->data[k] = p->data[k];
				for(k = 0; k < h2->Col; k++)
					s->data[h1->Col + k] = q->data[k];
				if(h->next == NULL)
					h->next = s;
				else
					r->next = s;
				r = s;
				h->Row++;
			}
			q = q->next;
		}
		p = p->next;
	}
	r->next = NULL;
}



