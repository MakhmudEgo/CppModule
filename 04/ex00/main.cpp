//
// Created by Mahmud Jego on 1/19/21.
//

#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl << std::endl;
	Peon hello("hello");
	Peon bye(hello);
	Peon maxi("maxy");
	std::cout << std::endl << std::endl;
	std::cout << hello << bye << maxi;
	std::cout << std::endl << std::endl;
	bye = maxi;
	std::cout << hello << bye << maxi;
	std::cout << std::endl << std::endl;

	Sorcerer scopycat("Scopycat", "pfpfpfpf pf");
	Sorcerer king("king", "yoyo");
	std::cout << scopycat << king;
	scopycat = king;
	std::cout << scopycat << king;
	std::cout << std::endl << std::endl;

	Victim& lPeon = joe;
	lPeon.getPolymorphed();
	robert.polymorph(lPeon);

	std::cout << std::endl << std::endl;


	return 0;
}
