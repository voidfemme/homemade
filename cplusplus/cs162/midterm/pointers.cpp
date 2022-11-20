#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(45) << setfill('-') << "" << endl;
}

int add_function(int p, int q){
	return p + q;
}

int* set_ptr_value(int*ptr_val){
	static int user_input = 0;
	cout << "Enter value for variable user_input: ";
	cin >> user_input;
	ptr_val = &user_input;
	return ptr_val;
}

int main(){

	int* pointer_value = nullptr;
	int first_pointer_value = 0;
	int second_pointer_value = 0;
	int answer = 0;

	first_pointer_value = *(set_ptr_value(pointer_value));
	second_pointer_value = *(set_ptr_value(pointer_value));

	answer = add_function(first_pointer_value,second_pointer_value);

	cout << "Add answer = " << answer << endl;

	return 0;
}
