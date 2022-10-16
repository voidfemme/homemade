#include <iostream>
#include <iomanip>

class Dynarray {
	private:
		int *pa;
		int length;
		int nextIndex;	// The next highest index value
	public:
		Dynarray();
		~Dynarray();
		int& operator[](int index);
		void add(int val);
		int size();
};

Dynarray::Dynarray(){
	pa = new int[0];
	for (int i=0;i<1;i++){
		pa[i] = 0;
	}
	length = 1;
	nextIndex = 0;
}

Dynarray::~Dynarray(){
	delete [] pa;
}

int& Dynarray::operator[] (int index){
	int *pnewa;
	if (index >= length){
		pnewa = new int[index + 1];
		for (int i=0;i<nextIndex;i++){
			pnewa[i] = pa[i];
		}
		for (int j = nextIndex; j < index + 1; j++){
			pnewa[j] = 0;
		}
		length = index + 1;
		delete [] pa;
		pa = pnewa;
	}
	if (index > nextIndex){
		nextIndex = index + 1;
	}
	return *(pa + index);
}


void Dynarray::add(int val){
	int *pnewa;
	if (nextIndex == length) {
		length = length + 1;
		pnewa = new int[length];
		for (int i = 0; i < nextIndex; i++){
			pnewa[i] = pa[i];
		}
		for (int j = nextIndex; j < length; j++){
			pnewa[j] = 0;
		}
		delete [] pa;
		pa = pnewa;
	}
	pa[nextIndex++] = val;
}

int Dynarray::size(){
	return length;
}

void FormatFun(){
	std::cout << std::setw(50) << std::setfill('-') << "" << std::endl;
}

int main(){
	Dynarray da;
	int userNum = 0;

	// Dynamic Matrix Allocations:
	int matrix_rows = 0;
	int matrix_columns = 0;
	int *dynamic_2d_array = new Dynarray;
	char printI;

	std::cout << "populate Matrix"

	std::cout << std::setw(50) << std::setfill('-') << "" << std::endl;
	std::cout << "replacing da[12] with 5" << std::endl;
	da[12] = 5;
	for (int j = 0; j < da.size(); j++){
		std::cout << da[j] << std::endl;
	}
	return 0;
}
