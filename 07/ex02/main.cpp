//
// Created by Mahmud Jego on 1/30/21.
//

#include "Array.tpp"

int main()
{
	std::cout << "hello day 07 ex 02 :(" << std::endl << std::endl;

	srand(time(nullptr));
	std::cout << "test for char" << std::endl;
	Array<char> Char(10);
	for (int i = 0; i < (int)Char.size(); ++i)
	{
		Char[i] = 97 + rand() % 26;
	}
	ft_put_endl(Char, Char.size());
	std::cout << std::endl;

	std::cout << "test for int" << std::endl;
	Array<int> array(10);
	for (int i = 0; i < 10; ++i)
	{
		array[i] = rand() % 10;
	}
	try {
		array[89] = 12;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "test copy constructor" << std::endl;
	std::cout << "array" << std::endl;
	ft_put_endl(array, array.size());
	Array<int> copy = array;
	std::cout << "copy" << std::endl;
	ft_put_endl(copy, copy.size());
	std::cout << std::endl;


	std::cout << "test assignment" << std::endl;
	Array<int> assig;
	assig = copy;
	ft_put_endl(assig, assig.size());

	return (0);
}