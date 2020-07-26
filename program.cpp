// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "maxheap.h"


bool checkEquality
(
	const std::vector<int> vec1,
	const std::vector<int> vec2
)
{
	if (vec1.size() != vec2.size())
		return false;
	
	for (int index = 0; index < vec1.size(); ++index)
	{
		if (vec1.at(index) != vec2.at(index))
			return false;
	}
	
	return true;
}

TEST_CASE( "Testing the insert call in the MINHEAP with each element", "[single-file]" )
{
	MaxHeap maxHeap;
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 0 );
	
	maxHeap.insertInterface(40);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 1 );
	
	maxHeap.insertInterface(50);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 2 );
	
	maxHeap.insertInterface(35);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 3 );
	
	maxHeap.insertInterface(75);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 4 );
	
	maxHeap.insertInterface(20);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 5 );
	
	maxHeap.insertInterface(60);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 6 );
	
	maxHeap.insertInterface(4);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 7 );
	
	maxHeap.insertInterface(2);
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 8 );
}

TEST_CASE( "Testing the insert call in the MINHEAP", "[single-file]" )
{
	MaxHeap maxHeap;
	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 0 );
	bool ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{}
	);
	REQUIRE(ret);
	
	maxHeap.insertInterface(40);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 1 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{40}
	);
	REQUIRE(ret);
	
	
	maxHeap.insertInterface(50);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 2 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{50,40}
	);
	REQUIRE(ret);
	
	maxHeap.insertInterface(75);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 3 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,50}
	);
	REQUIRE(ret);
	
	maxHeap.insertInterface(35);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 4 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,50,35}
	);
	REQUIRE(ret);
	
	maxHeap.insertInterface(20);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 5 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,50,35,20}
	);
	REQUIRE(ret);

	maxHeap.insertInterface(60);	
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 6 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,60,35,20,50}
	);
	REQUIRE(ret);
	
	maxHeap.insertInterface(4);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 7 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,60,35,20,50,4}
	);
	REQUIRE(ret);
	
	maxHeap.insertInterface(2);
	REQUIRE( maxHeap.getNumberOfElementsInTheVector() == 8 );
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,60,35,20,50,4,2}
	);
	REQUIRE(ret);
}

TEST_CASE( "Testing the remove max call in the MAXHEAP", "[single-file]" )
{
	MaxHeap maxHeap;
	maxHeap.insertInterface(40);
	maxHeap.insertInterface(50);
	maxHeap.insertInterface(75);
	maxHeap.insertInterface(35);
	maxHeap.insertInterface(20);
	maxHeap.insertInterface(60);
	maxHeap.insertInterface(4);
	maxHeap.insertInterface(2);
	
	bool ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{75,40,60,35,20,50,4,2}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{60,40,50,35,20,2,4}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{50,40,4,35,20,2}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{40,35,4,2,20}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{35,20,4,2}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{20,2,4}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{4,2}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{2}
	);
	REQUIRE(ret);
	
	maxHeap.removeTheHighestNumber();
	ret = checkEquality
	(
		maxHeap.getHeapAsAVector(),
		{}
	);
	REQUIRE(ret);

}


