#include <iostream>
#include <iomanip>

class Dynarray {
	private:
		int *pa;
		int length;
		int nextIndex;	// The next highest index value
		void FormatFun(){std::cout << std::setw(60) << std::setfill('-') << "" << std::endl;}
	public:
		Dynarray();
		~Dynarray();
		// In this context, we are altering the behavior of the '[]' operator
			// default behavior of '[]':
			// - Accesses a member of its operand, in other words in the line:
			// 	int somearray[i];
			// 	    ^operand;^operator; i = index to be accessed.
			// 	- Can any type of variables that have a member be accessed
			// 	  using braces?
			// - the "subscript" operator provides access to an object pointed-to
			//   by the pointer or array operand
			// 	---------------------------
			// 	expr1 [ expr2 ]		(1)
			// 	---------------------------
			// 	expr1 [ { expr, ... } ]
			// 	---------------------------
			// 	expr1 [ expr2, expr, ...]
			//
			// - Secondary uses to the brackets include the built-in "indirection"
			//   operator, and the "address-of" operator.
		int& operator[](int index);
		void add(int val);
		int size();
};


// End of header;
Dynarray::Dynarray(){
	std::cout << "Instantiating Dynarray" <<std::endl;
	pa = new int[1];
	for (int i=0;i<1;i++){
		pa[i] = 0;
		std::cout << "DEBUG-Dynarray(): assigning: pa["<<i<<"]"<< "with 0" << std::endl;
	}
	length = 1;
	nextIndex = 0;
	FormatFun();
	// ^The constructor creates a default size array of 10 elements using "new" and
	// assigns it to "pa". The for loop initializes the array elements to zero. length
	// is set to 10, and nextIndex to 0; The constructor is called when an object is
	// created by e.g.
	// 	Dynarray da;
}

// This is best practice, but I don't have to have it for my program to function.
// 	this is an memory optimization to prevent memory leaks, by instructing the 
// 	program to free the memory up for reuse when the array is no longer needed.
Dynarray::~Dynarray(){
	std::cout << "cleaning up..." <<std::endl;
	delete [] pa;
	FormatFun();
}

// the built-in "subscript" expression E1[E2] is exactly identical to the expression *(E1 + E2)
// That is, the pointer operand (which may be a result of array-to-pointer conversion, and
// which must point to an element of some array or one past the end) is adjusted to point to
// another element of the same array, following the rules of pointer arithmetics, and then is
// dereferenced
//	Since we are overloading the operator, this function is called every time we use the
//	[] operator
int& Dynarray::operator[] (int index){
	// pointer for new array
	int *pnewa;
	if (index >= length){
		pnewa = new int[index + 1];
		// if the index is >= length, we create the next value in our array at
		// index + 10, then we set each value in the new index to the value of
		// each of the corresponding values we initialized in the Dynarray constructor.
		// This means that we are copying whatever exists at "pa[]" to a new 
		// array "pnewa[]" which has the size of length.Dynarray + 10
		for (int i=0;i<nextIndex;i++){
			pnewa[i]= pa[i];
			std::cout << "DEBUG-operator[i]: assigning: pnewa["<<i<<"]"<< "with value p["<<i<<"]: " << pa[i] << std::endl;
		}
		// Then, we start at the +tenth member of our newly expanded array "pnewa[]"
		// and initialize the new slots to 0;
		FormatFun();
		for (int j = nextIndex; j < index + 1; j++){
			pnewa[j] = 0;
			std::cout << "DEBUG-operator[j]: assigning: pnewa["<<j<<"]"<< "with 0" << std::endl;
		}
		FormatFun();
		// set the length of the Dynarray + 10. This allows Dynarray to actually
		// "know" the length of the list.
		length = index + 1;
		// delete the old array (otherwise that array would still exist for the 
		// runtime of the program, even though it's no longer accessible to us.
		// Therefore, it's redundant code, and the more arrays we make, the more
		// ram our program will take up during runtime.)
		delete [] pa;
		// because pa is a pointer, we now want to point the Dynarray pa attribute
		// to the start of our newly created dynamic array.
		pa = pnewa;
	}
	//
	if (index > nextIndex){
		nextIndex = index + 1;
		// The return type of int& is the reference and is obtained by dereferencing
		// the pointer pa, incremented by index. If we returned a pointer, it would
		// have to be dereferenced in the code that uses it. Returning a reference
		// avoids this.
	}
	return *(pa + index);
	FormatFun();
}

// add(int) works similar to our overloaded brackets, but it works at the end of the array,
// making it bigger if necessary. Whereas we overladed the operator [] for the main indexing
// operation, this is just an ordinary function, and is called by,
// 	da.add(15);

void Dynarray::add(int val){
	std::cout << "DEBUG-add(): Dynarray::add() called." << std::endl;
	int *pnewa;
	// nextIndex is always supposed to be the value of the next empty index in the array.
	if (nextIndex == length) {
		length = length + 1;
		pnewa = new int[length];
		for (int i = 0; i < nextIndex; i++){
			pnewa[i] = pa[i];
			std::cout << "DEBUG-add(): assigning: pnewa["<<i<<"]"<< "with value p["<<i<<"]: " << pa[i] << std::endl;
		}
		FormatFun();
		for (int j = nextIndex; j < length; j++){
			pnewa[j] = 0;
			std::cout << "DEBUG-add(): assigning: pnewa["<<j<<"]"<< "with 0" << std::endl;
		}
		delete [] pa;
		pa = pnewa;
	}
	// now we insert the passed value in the next empty slot in the array.
	pa[nextIndex++] = val;	// since this is a void function, we don't have to return a
				// value, instead, add() has access to pa[] in the instantiated
				// Dynarray object.
	FormatFun();
}

int Dynarray::size(){
	return length;
}

void FormatFun(){
	std::cout << std::setw(60) << std::setfill('-') << "" << std::endl;
}
int main(){
	// Instantiate array "da"
	Dynarray da;
	int userNum = 0;
	for(int inputcounter = 0; inputcounter < 33; inputcounter++){
		da.add(inputcounter * 10);
	}
	for (int i = 0; i < da.size(); i++){
		std::cout << da[i] << std::endl;
	}
	da[12] = 5;
	std::cout << "DEBUG-main(): assigning: da[12]"<< "with 5" << std::endl;
	FormatFun();
	FormatFun();
	std::cout << "Final list:" << std::endl;
	FormatFun();
	for (int j = 0; j < da.size(); j++){
		std::cout << da[j] << std::endl;
	}
	FormatFun();
	return 0;
}
