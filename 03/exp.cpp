//
// Created by Mahmud Jego on 1/13/21.
//

#include <iostream>

class Parent {
public:
	Parent(const char *name) : name(name)
	{
	}
	virtual const char *getClass()
	{
		return (name);
	}

protected:
	const char *name;
};

class Child1 : public Parent {
public:
	Child1 (const char *name) : Parent(name) {}
	virtual const char *getClass()
	{
		return (name);
	}
};

class Child2 : public Child1
{
public:
	Child2 (const char *name) : Child1(name) {}
	virtual const char *getClass() { return this->name;}
};

class Child3 : public Child2
{
public:
	Child3(const char *name) : Child2(name) {}
	virtual const char *getClass() { return this->name;}
};

int main()
{
	Child1 child1("child1");
	Parent& hello1 = child1;
	std::cout << "this is " << hello1.getClass() << std::endl;

	Child2 child2("child2");
	Parent& hello2 = child2;
	std::cout << "this is " << hello2.getClass() << std::endl;

	Parent parent("parent");
	std::cout << parent.getClass() << std::endl;

	return (0);
}