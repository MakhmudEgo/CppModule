//
// Created by Mahmud Jego on 1/29/21.
//

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate()
{
	Base *res;

	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			res = new A;
			break ;
		case 1:
			res = new B;
			break ;
		case 2:
			res = new C;
			break ;
	}
	return (res);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int main()
{
	Base *base = generate();

	std::cout << "identify from pointer" << std::endl;
	identify_from_pointer(base);
	std::cout << "identify from reference" << std::endl;
	identify_from_reference(*base);

	return (0);
}