// Author = voidfemme
// Goal: use 1-D arrays and index data by [y * width + x]

#include <iostream>
#include <iomanip>

// Some nice formatting
void FormatFun(){
	std::cout << std::setw(55) << std::setfill('-') << "" << std::endl;
}

// matrix population
void SetMatrixValues (int rows, int columns, int* matrix){
	int a = 0;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			std::cout << "enter value: ";
			std::cin >> matrix[i * columns + j];
			a++;
		}
	}
	matrix[a + 1] = -999;
}

// matrix printing
void PrintMatrixValues(int rows, int columns, int* matrix){
	int a = 0;
	int b = 0;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			std::cout << matrix[i * columns + j] << " ";
			a++;
		}
		std::cout << std::endl;
		b++;
	}
	std::cout << matrix[a + 1] << std::endl;
}

// matrix addition
void AddMatrices(int* m1, int* m2, int rows, int columns){
	FormatFun();
	std::cout << "Addition: " << std::endl;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			std::cout << m1[i * columns + j] + m2[i * columns + j] << " ";
		}
		std::cout << std::endl;
	}
}

// Main method
int main(){

	int first_matrix_columns = 0;
	int first_matrix_rows = 0;
	int first_matrix_sz = first_matrix_rows * first_matrix_columns;
	int* first_matrix = nullptr;

	int second_matrix_rows = 0;
	int second_matrix_columns = 0;
	int second_matrix_sz = second_matrix_rows * second_matrix_columns;
	int* second_matrix = nullptr;

	// input first matrix
	FormatFun();
	std::cout << "matrix one columns: ";
	std::cin >> first_matrix_columns;
	std::cout << "matrix one rows: ";
	std::cin >> first_matrix_rows;
	first_matrix_sz = first_matrix_rows * first_matrix_columns;
	FormatFun();

	std::cout << "total number of elements in first matrix: " << first_matrix_sz << std::endl; 

	first_matrix = new int[first_matrix_sz];

	SetMatrixValues(first_matrix_rows, first_matrix_columns, first_matrix);
	PrintMatrixValues(first_matrix_rows, first_matrix_columns, first_matrix);

	// input second matrix
	FormatFun();
	std::cout << "matrix two rows: ";
	std::cin >> second_matrix_rows;
	std::cout << "matrix two columns: ";
	std::cin >> second_matrix_columns;
	FormatFun();
	second_matrix_sz = second_matrix_rows * second_matrix_columns;
	std::cout << "total number of elements in second matrix: " << second_matrix_sz << std::endl; 

	second_matrix = new int[second_matrix_sz];

	SetMatrixValues(second_matrix_rows, second_matrix_columns, second_matrix);
	PrintMatrixValues(second_matrix_rows, second_matrix_columns, second_matrix);

	if ((first_matrix_rows == second_matrix_rows) && (first_matrix_columns == second_matrix_columns)){
		AddMatrices(first_matrix, second_matrix, first_matrix_rows, first_matrix_columns);
	}
	else{
		FormatFun();
		std::cout << "could not add the two matrices." << std::endl;
		FormatFun();
	}

//	if (first_matrix_columns == second_matrix_rows){
//		MultiplyMatrices(first_matrix, second_matrix,)
//	}
	
	// print second matrix and ask for confirmation

	return 0;
}
