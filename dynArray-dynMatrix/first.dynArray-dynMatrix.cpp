#include <iostream>
#include <iomanip>
using namespace std;

// Some nice formatting
void FormatFun(){
	cout << setw(55) << setfill('-') << "" << endl;
}

// 1-D Array population
void populateArray(int* p, int arr_sz){
	for(int i=0;i<arr_sz;i++){
		cout << "e" << i << "> ";
		cin >> p[i];
		
	}
}

// Array population 2, multidimensional boogaloo
void populateMatrix(int** tempMatrix, int mRows, int mColumns){
	
	for(int i=0;i<mRows;i++){
		tempMatrix[i] = new int[mColumns];
		for(int j=0;j<mColumns;j++){
			cout << "Enter value [" << i << "][" << j << "]: ";
			cin >> tempMatrix[i][j];
		}
	}
}

void printArrayValues(int* p, int arr_sz){
	for(int i=0;i<(arr_sz-1);i++){
		cout << p[i] << ", ";
	}
	cout << p[arr_sz-1] << endl;
	
}

void printMatrixValues(int** tempMatrix, int mRows, int mColumns){
	
	for(int i=0;i<mRows;i++){
		for(int j=0;j<mColumns;j++){
			cout << "[" << tempMatrix[i][j]<< "] ";
		}
		cout << endl;
	}
	
}

void arraySummary(int* p, int arr_sz){
	int largestNum = p[0];
	int smallestNum = p[0];
	for(int i=0;i<arr_sz;i++){
		if(p[i] >= largestNum){
			largestNum = p[i];
		}
		if(p[i] <= smallestNum){
			smallestNum = p[i];
		}
	}
	cout << "The largest number you entered was: " << largestNum << endl;
	
	cout << "The smallest number you entered was: " << smallestNum << endl;
	
}

bool doTheMatrix(){
	char userChoice;
	cout << "Would you like to do the Matrix? (y/n): ";
	cin >> userChoice;
	switch(userChoice){
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			return false;
	}
}

int main(int argc, char *argv[]){
	int* p = nullptr;
	int arr_sz;

	int counter;
	
	cout << "argv[0] >> " << argv[0] << std::endl;
	
	if(argc==1){
		std::printf("No Extra Command Line Argument Passed Other than Program.\n");
		
	}
	if(argc>=2){
		std::printf("\nNumber of Arguments Passed: %d",argc);
		std::cout << std::endl;
		
		std::printf("\n----Following are the command line arguments passed----\n");
		for(counter=0;counter<argc;counter++){
			std::printf("\nargv[%d]: %s",counter,argv[counter]);
		}
	std::cout << std::endl;
	}
	

	// Dynamic Matrix Allocations:
	int** tempMatrix = new int*[3];
	int mRows = 0;
	int mColumns = 0;

	
	cout << "enter the number of array elements: ";
	int x = (int)arr_sz - 48;
	cout << " x = " << x << endl;
	cin >> arr_sz; 
	
	
	p = new int[arr_sz];
	populateArray(p,arr_sz);
	cout << "Your TEMPORARY 1-D dynamic array values are: ";
	printArrayValues(p,arr_sz);
	arraySummary(p,arr_sz);
	
	if(doTheMatrix()){
		cout << "Array population 2: multidimensional boogaloo" << endl;
		
		cout << "Enter the number of matrix rows: ";
		cin >> mRows;
		cout << "Enter the number of Matrix columns: ";
		cin >> mColumns;

		populateMatrix(tempMatrix,mRows,mColumns);
		printMatrixValues(tempMatrix,mRows,mColumns);
	}
	else{
		cout << "good bye!" << endl;
		
	}
	return 0;
}
