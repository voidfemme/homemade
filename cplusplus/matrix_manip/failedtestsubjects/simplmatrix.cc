#include <iomanip>
#include "matrix.h"

void FormatFun(){
	cout << setw(55) << setfill('-') << "" << endl;
}

int main(){
	int user_rows = 0;
	int user_columns = 0;

	cout << "user_rows: ";
	cin >> user_rows;
	cout << "user_columns: ";
	cin >> user_columns;
	FormatFun();
	Matrix matrix_one(user_rows,user_columns);
	matrix_one.SetMatrixValues(user_rows,user_columns);
	matrix_one.PrintMatrixValues(user_rows,user_columns);
	cout << "wake up neo." << endl;
	return 0;
}
