#include <iostream>
#include <iomanip>
using namespace std;

// figure out how to create some templates for vim
// figure out how to create tabs in urxvt
void format_function(){
	cout<<setw(40)<<setfill('-')<<""<<endl;
}
void populate_array(int* p,int arr_sz){
	for(int i=0; i<arr_sz;i++){
		cout<<"Enter value: ";
		cin>>p[i];
		format_function();
	}
}

// Remember how pointers work!
// y = some_value
// x = where_why_lives
// &y = where_why_lives
// &x = where_ex_lives
// *x points to some_value
//
//             
//    ^               ^
//   ^ ^             ^ ^
//  ^   ^           ^   ^
// |     |         |     |
// | &x  |         | &y  |
// |-----|         |-----|
// | &y  | //*x--> |value|


void print_array(int* p, int arr_sz){
	for(int i=0; i<arr_sz; i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int* p = nullptr;
	int dy_arr_sz = 0;

	format_function();
	cout<<"Dynamic Array Example"<<endl;
	format_function();

	cout<<"Enter the size of the array: ";
	cin>>dy_arr_sz;
	format_function();

	p = new int[dy_arr_sz];
	populate_array(p,dy_arr_sz);

	cout<<"Array Values = ";
	print_array(p,dy_arr_sz);

	format_function();
	
	return 0;
}
