#include "Test.hpp"

void test()
{

}

int main()
{
	Test test1(1);
	Test test2(2);

	test2 = test1;
	test2.setTest(7);

	Test test3(test1);

	test3.setTest(88);

	(test3 = test2) = test1;
	int i = 3;

	const int n = 5;

	int j;
	(j = n) = i;

//	test3.setTest(4);

	return 0;
}
