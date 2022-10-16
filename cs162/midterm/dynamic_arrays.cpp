#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(35) << setfill('-') << "" << endl;
}

void pop_dy_arr(int* p, int arr_size){
	for(int i=0; i<arr_size; i++){
		cout << "Enter array value: ";
		cin >> p[i];
		format_fun();
	}
}

void print_dy_arr(int* p, int arr_size){
	cout << "Your lucky numbers are: ";
	for(int i=0; i<arr_size; i++){
		cout << p[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr_size = 0;

	cout << "Enter arr_size: ";
	cin >> arr_size;

	int* p = nullptr;
	p = new int[arr_size];

	pop_dy_arr(p,arr_size);
	print_dy_arr(p,arr_size);

	return 0;

}
