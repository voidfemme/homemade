#include <iostream>
#include <iomanip>
using namespace std;

// Some nice formatting
void format_fun(){
	cout << setw(45) << setfill('-') << "" << endl;
}

// Population; note that p is a pointer to an int, and arr_sz is a user-input value.
void populate_array(int* p, int arr_sz){
	for(int i=0;i<arr_sz;i++){
		cout << "Enter element #" << i << ": ";
		cin >> p[i];
		format_fun();
	}
}

void print_array(int* p, int arr_sz){
	for(int i=0;i<(arr_sz-1);i++){
		cout << p[i] << ", ";
	}
	cout << p[arr_sz-1] << endl;
	format_fun();
}

void array_summary(int*p, int arr_sz){
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
	format_fun();
	cout << "And the smallest number was: " << smallestNum << endl;
	format_fun();
}

int main(){
	int* p = nullptr;
	int arr_sz;

	format_fun();
	cout << "Enter the number of array elements: ";
	cin >> arr_sz;
	format_fun();

	p = new int[arr_sz];
	populate_array(p,arr_sz);
	cout << "Array Values = ";
	print_array(p, arr_sz);
	array_summary(p, arr_sz);
	return 0;
}
