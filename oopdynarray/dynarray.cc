#include "dynarray.h"

Dynarray::Dynarray() {
	pa = new int[10];
	for (int i;i<10;i++) {
		pa[i] = 0;
	}
	length = 10;
	nextIndex = 0;
}

Dynarray::~Dynarray() {
	delete [] pa;
}

// This function returns the address of *(pa + index)
// *(pa + index) is determined by  
int& Dynarray::operator[](int index){
	// pointer for a new array
	int *p_newarray;
//	is element in the array
	if (index >= length) {
		// allocate a bigger array
		p_newarray = new int [index + 10];
		// copy old values
		for (int i=0;i<nextIndex;i++){
			p_newarray[i] = pa[i];
		}
		// initialize remainder
		for(int j=nextIndex;j<index+10;j++){
			p_newarray[j] = 0;
		}
		length = index + 10;
		delete [] pa;
		pa = p_newarray;
	}
	if (index > nextIndex){
		nextIndex = index + 1;
	}
	return *(pa + index);
}


