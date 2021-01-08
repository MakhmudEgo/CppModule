//
// Created by Mahmud Jego on 1/8/21.
//

#include "Pony.hpp"

int main()
{
	// Stack
	Pony stackPony("Avallie", "Nu, takoe sebe", 5);
	stackPony.getInfoAboutPony();
	stackPony.Relax();
	stackPony.Relax(4);
	stackPony.IsLife();
	stackPony.Work(13);
	stackPony.IsLife();
	stackPony.Work(15);
	stackPony.Relax();
	stackPony.IsLife();
	stackPony.getInfoAboutPony();

	std::cout << std::endl;

	// Heap
	Pony *heapPony = new Pony;
	heapPony->getInfoAboutPony();
	heapPony->Work();
	heapPony->Relax(8);
	heapPony->Work(6);
	heapPony->IsLife();
	heapPony->Relax(6);
	heapPony->Work(2);
	heapPony->Work(6);
	heapPony->Relax(13);
	heapPony->Work(5);
	heapPony->IsLife();
	heapPony->getInfoAboutPony();
	delete heapPony;

	return (0);
}