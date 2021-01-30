//
// Created by Makhmud Ego on 30.01.2021.
//

#include "whatever.hpp"

int main()
{
	std::cout << "hello day 07 :(" << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::cout << "test for int (5, 8)" << std::endl;
	std::cout << "max - " <<  ::max(5, 18) << std::endl;
	std::cout << "min - " <<  ::min(5, 18) << std::endl << std::endl;

	std::cout << "test for float (5.80f, 4.f)" << std::endl;
	std::cout << "max - " <<  ::max(5.80f,4.f) << std::endl;
	std::cout << "min - " <<  ::min(5.80f,4.f) << std::endl << std::endl;

	std::cout << "test for char ('a', 'A')" << std::endl;
	std::cout << "max - " <<  ::max('a', 'A') << std::endl;
	std::cout << "min - " <<  ::min('a', 'A') << std::endl << std::endl;

	std::cout << "test for std::string (std::string(\"hello\"), std::string(\"HELLO\"))" << std::endl;
	std::cout << "max - " <<  ::max(std::string("hello"), std::string("HELLO")) << std::endl;
	std::cout << "min - " <<  ::min(std::string("hello"), std::string("HELLO")) << std::endl << std::endl;


}