#include "matrix.h"

// Create Matrix class constructors:
Matrix::Matrix(){
	//Default constructor
	int** dynamic_2d_array_ = new int*[0];
	int rows_ = 0;
	int columns_ = 0;
}

//void Matrix::SetMatrixValueAtPosition(int** dynamic_2d_array_, int rows_, int columns_,int value){
//	dynamic_2d_array_[rows_][columns_] = value;
//}
//
//int Matrix::GetMatrixValueAtPosition(int** dynamic_2d_array_, int rows_, int columns_,int value){
//	return dynamic_2d_array_[rows_][columns_];
//}

void Matrix::SetMatrixValues(int rows_, int columns_){
	for(int i=0;i<rows_;i++){
		dynamic_2d_array_[i] = new int[columns_];
		for(int j=0;j<columns_;j++){
			dynamic_2d_array_[i][j]=i+j;
		}
	}
}

// int GetMatrixValues(int** dynamic_2d_array_, int rows_, int columns_){
// 	for(int i=0;i<rows_;i++){
// 		for(int j=0;j<columns_;j++){
// 			cout >> dynamic_2d_array_[i][j];
// 		}
// 	}
// }

void Matrix::PrintMatrixValues(int rows_, int columns_){
	for(int i=0;i<rows_;i++){
		dynamic_2d_array_[i] = new int[columns_];
		for(int j=0;j<columns_;j++){
			cout << "[" << dynamic_2d_array_ << "] ";
		}
		cout << endl;
	}
}
