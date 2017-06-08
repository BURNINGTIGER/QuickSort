#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("sort","[sort]")
{
 	int array[6] = { 2 , 1, 6, 3, 7, 4 };
	int sortedArray[6] =  { 1, 2, 3, 4, 6, 7 };
	int* first = &array[0];
	int* last = &array[6];
	QuickSort(first, last);
	bool result = true;
	for (int i = 0; i < 6; i++)
	if (array[i] != sortedArray[i])
	result= false;
	REQUIRE(result == true);
}
