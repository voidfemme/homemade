#include "matrix.h"
#include <iomanip>
/* The goal of this file is to:
 * 	1. create variables matrix_one and matrix_two of type 'Matrix()'.
 * 	2. set values for each of these matrices
 * 	3. print data from both matrices into cout
 */

// Some nice formatting
void FormatFun(){
	cout << setw(60) << setfill('-') << "" << endl;
}

int main(){
	int user_num_rows = 0;
	int user_num_columns = 0;
	Matrix matrix_one;
	FormatFun();
	cout << "Matrix Algorithm 2: object-oriented boogaloo" << endl;
	FormatFun();

	cout << "matrix rows: ";
	cin >> user_num_rows;
	cout << "matrix columns: ";
	cin >> user_num_columns;

	matrix_one.SetMatrixValues(user_num_rows,user_num_columns);
	
	return 0;
}
