#include <iostream>
#include <string>

class Entity
{
	public:
		void Print() const {std::cout << "Hello!" << std::endl;}
};

int main()
{
	Entity e;
	e.Print();
	// This is allowed

	// This is not allowed:
	Entity* ptr = &e;
	ptr.Print();

	// because ptr is just a number value. THEREFORE we dereference the pointer;
	Entity* ptr = &e;
	Entity& entity = *ptr;
	// the above line says, 
	entity.Print();

	Entity* ptr = &e;
	Entity& entity = 
	std::cin.get();
	return 0;
}
