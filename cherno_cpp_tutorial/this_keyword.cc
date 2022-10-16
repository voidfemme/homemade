#include <iostream>
#include <iomanip>

// The "this" keyword...
//
// "this" is only accessible to us through a 'member function'
// 	- A member function is a function that belongs to a class, or
// 		a function that is a member of a class. - So a method.
//
// "this" is a pointer to the current object instance that the method belongs to.

class Entity {
	public:
		int x, y;

		Entity(int x, int y){
			x = x;
			// in the above code, I'm setting the parameter of Entity() as equal to itself.

			Entity* e = this;
					// "this" is "Entity *const this"
		}
};

int main() {

	std::cin.get();
}
