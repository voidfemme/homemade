#pragma once
#include <iostream>
using namespace std;

class Matrix{
	private:
		int** dynamic_2d_array_;
		int matrix_rows_;
		int matrix_columns_;
	public:
		Matrix();
		void SetMatrixValues(int,int);
		void PrintMatrixValues(int,int);
};
