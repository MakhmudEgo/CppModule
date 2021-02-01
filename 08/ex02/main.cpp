//
// Created by Mahmud Jego on 1/31/21.
//

#include "MutantStack.hpp"
int main()
{
/*	std::stack<int>::container_type helo;
	helo.push_back(234);
	std::deque<int> i;*/
	MutantStack<int> mutantStack;
	mutantStack.push(34);
	mutantStack.push(43);
	mutantStack.push(12);
	mutantStack.push(32);

	std::cout << "iterator" << std::endl;
	MutantStack<int>::iterator iter = mutantStack.begin();
	std::cout << "begin: " << *iter << std::endl;
	MutantStack<int>::iterator iterEnd = mutantStack.end();
	std::cout << "end(-1): " << *(--iterEnd) << std::endl;

	std::cout << "const_iterator" << std::endl;
	MutantStack<int>::const_iterator constIter = mutantStack.cbegin();
	std::cout << "cbegin: "<< *constIter << std::endl;
	MutantStack<int>::const_iterator constIterEnd = mutantStack.cend();
	std::cout << "cend(-1): "<< *(--constIterEnd) << std::endl;
	*iter = 5;
	std::cout << *iter << std::endl;
//	*constIter = 12; // const
	std::cout << "reverse_iterator" << std::endl;
	MutantStack<int>::reverse_iterator reverseIterator = mutantStack.rbegin();
	std::cout << "rbegin: " << *reverseIterator << std::endl;

	MutantStack<int>::reverse_iterator reverseIteratorEnd = mutantStack.rend();
	std::cout << "rend: " << *(--reverseIteratorEnd) << std::endl;

	std::cout << "const_reverse_iterator" << std::endl;
	MutantStack<int>::const_reverse_iterator constReverseIterator = mutantStack.crbegin();
	std::cout << "crbegin: " << *constReverseIterator << std::endl;
	MutantStack<int>::const_reverse_iterator constReverseIteratorEnd = mutantStack.crend();
	std::cout << "cend: " << *(--constReverseIteratorEnd) << std::endl;

	std::cout << std::endl;
	std::cout << "test for copy constructor and operator=" << std::endl;
	MutantStack<int> mutantStack1;
	mutantStack1 = mutantStack;
	MutantStack<int> mutantStack2(mutantStack1);
	std::cout << *mutantStack.begin() << std::endl;
	std::cout << *mutantStack1.begin() << std::endl;
	std::cout << *mutantStack2.begin() << std::endl;
}
/*
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it; }
	std::stack<int> s(mstack);
	return (0);
}*/
