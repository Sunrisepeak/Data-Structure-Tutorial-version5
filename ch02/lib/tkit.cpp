#include<iostream>
#include<tkit>
#include<random>
void TData::rdata_generator(
		address_pointer address,
	   	const int mix,
	   	const int max, 
		const int x, 
		const int y, 
		const int z
	)
{
	const int length = z*x*y;
	int* it = (int *)address;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> range_number(mix, max);
	for(int i = 0; i < length; i++, it++ )
	{
		*it = range_number(generator);	
	}
}
