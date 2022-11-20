#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int* new_pointer = nullptr;
	int* dy_arr = nullptr;
	int array_size = 0;
	int new_value = 0;

	cout<<"Enter array size: ";
	cin>>array_size;
	dy_arr = new int[array_size];
	// "new" is allocating memory given by array_size

	new_pointer = new int;
	cout<<"Enter number to store in newly allocated memory cell: ";
	cin>>new_value;

	*new_pointer = new_value;

	cout<<"new pointer location value = "<<*new_pointer<<endl;
	cout<<"new_pointer = "<<new_pointer<<endl;


	return 0;
}

// NOTES:
// 	new_pointer = new int
// 	*new_pointer = 42
//
//	"new" is allocating a memory 'packet' to store a value
//	on the fly. You can access that value with *new_pointer.
//	*new_pointer is like a thread tied to that packet.
//	If you cut the thread, you lose access to that packet,
//	but you can reuse the thread by creating a new memory
//	packet, which ties the new_pointer to the new packet.
//
// 	so 42 does not then have a variable assigned to it.
// 	you can only access 42 via *new_pointer.
// 	so if you re-assign new_pointer, you will lose access
// 	to the 42 value.
