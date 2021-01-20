//
// Created by Mahmud Jego on 1/19/21.
//

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string m_name;

	// Мы сделали этот конструктор protected так как не хотим, чтобы пользователи могли создавать объекты класса Animal напрямую,
	// но хотим, чтобы эта возможность оставалась в дочерних классах
	Animal(std::string name)
			: m_name(name)
	{
	}

public:
	std::string getName() { return m_name; }
	virtual const char* speak() = 0;
};

class Cat: public Animal
{
public:
	Cat(std::string name)
			: Animal(name)
	{
	}

	virtual const char* speak() { return "Meow"; }
};

class Dog: public Animal
{
public:
	Dog(std::string name)
			: Animal(name)
	{
	}

	virtual const char* speak() { return "Woof"; }
};


class Lion: public Animal
{
public:
	Lion(std::string name)
			: Animal(name)
	{
	}
	const char* speak() { return "Lion"; }
	// Мы забыли переопределить метод speak()
};

int main()
{
	Lion lion("John");
	std::cout << lion.getName() << " says " << lion.speak() << '\n';
}