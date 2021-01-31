//
// Created by Mahmud Jego on 1/30/21.
//

#include "iter.hpp"

int main()
{
	std::cout << "hello day 07 ex 01 :(" << std::endl << std::endl;

	srand(time(nullptr));

	std::cout << "test for int" << std::endl;
	int arrInt[] = {(rand() % 10), (rand() % 10), (rand() % 10), (rand() % 10), (rand() % 10)};
	iter(arrInt, 5, ft_put);
	std::cout << std::endl;

	std::cout << "test for char" << std::endl;
	char arrChar[] = {(char)(97 + rand() % 26), (char)(97 + rand() % 26), (char)(97 + rand() % 26), (char)(97 + rand() % 26), (char)(97 + rand() % 26)};
	iter(arrChar, 5, ft_put);
	std::cout << std::endl;

	std::cout << "test for flaot" << std::endl;
	float arrFloat[] = {(float)((rand() % 10) + 0.1), (float)((rand() % 10) + 0.2), (float)((rand() % 10) + 0.3), (float)((rand() % 10) + 0.4), (float)((rand() % 10) + 0.5)};
	iter(arrFloat, 5, ft_put);
	std::cout << std::endl;

	return (0);
}

// test check-list
/*
class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}*/
