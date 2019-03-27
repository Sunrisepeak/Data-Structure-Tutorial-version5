/***************************************************
 *this is implement of TData class.				****
 *							--SPeak 2019.3.15	****
 ***************************************************/

#include<iostream>
#include<tkit>
#include<random>
#include<ctime>
void TData::swap(int &a, int &b)
{
		//swap int-type
		a = a + b;
		b = a - b;
		a = a - b;
}
void TData::swap(char &a, char &b)
{
		//swap char-type
		a = a + b;
		b = a - b;
		a = a - b;
}

int TData::rdata(
		void* address,
	   	const int mix,
	   	const int max, 
		const int length
	)
{
	std::default_random_engine generator(time(0));
	std::uniform_int_distribution<int> range_number(mix, max);
	int begin = range_number(generator);
	if(address != TData::rdata_disenable)	
	{	
		int* it = (int *)address;
		*it = begin;
		for(int i = 1; i < length; i++, it++ )
		{
			*it = range_number(generator);	
		}
	}
	return begin;	//return first random 'data'
}
