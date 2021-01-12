//
// Created by Mahmud Jego on 1/11/21.
//

#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

class Test {
public:
	Test(const int& nSrc);

	Test(const Test& tTest);

	~Test();

	void setTest(const int& newA);

	Test& operator=(const Test& test);
private:
	int a;
	int *b;
};


#endif //TEST_HPP
