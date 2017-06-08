#include <iostream>
#include <iterator>

using namespace std;

template <typename Iterator>

void QuickSort(Iterator f, Iterator l)
{
	Iterator piv = l - 1;
	Iterator j = l - 1;
	Iterator i = f;
	while (i <= j)
	{
		while (*i < *pivot)
		{
			++i;
		}
		while (*j > *pivot)
		{
			--j;
		}
		if (i <= j)
		{
			std::iter_swap(j, i);
			++i;
			--j;
		}
	}
	if (i < l)
		qSort(i, l);
	if (f < j)
		qSort(f, j + 1);
}
