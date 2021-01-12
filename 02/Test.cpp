//
// Created by Mahmud Jego on 1/11/21.
//

#include "Test.hpp"

Test::Test(const int& nSrc)
{
	this->a = 1;
	this->b = new int(nSrc + 1);
}

Test::~Test()
{
	std::cout << "call Destructor" << std::endl;
	delete [] this->b;
}

void Test::setTest(const int &newA)
{
	this->a = newA;
	*this->b = newA;
}

Test &Test::operator=(const Test &test)
{
	if (&test != this)
	{
		this->a = test.a;
		*this->b = *test.b;
	}
	return *this;
}

Test::Test(const Test &tTest)
{
	this->a = tTest.a;
	this->b = new int[this->a];
}

/*
Test& Test::operator=(const Test &test)
{
*/
/*	delete [] this->b;
	if (&test != this)
		this->b = new int[5];*//*

	return *this;
}
*/
