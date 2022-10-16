#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(40) << setfill('-') << "" << endl;
}

void print_array(int a1[], int a1Size){
	cout << "Array a1 values:" << endl;
	for(int i=0;i<a1Size;i++){
		cout << a1[i] << " ";
	}
	cout << endl;
	format_fun();
}

int del_num(int a1[],int x,int a1Size){
	a1[x] = a1[x+1];
	return a1Size - 1;
}


void compare_num(int a1[], int a1Size, int a2[], int a2Size){
	format_fun();
	cout << "Array a1 values:" << endl;
	for(int i=0;i<a1Size;i++){
		cout << a1[i] << " ";
	}
	cout << endl;
	format_fun();

	for(int i=0;i<a1Size;i++){	
		for(int j=0;j<a2Size;j++){
			if(a1[i]==a2[j]){
				cout << a1[i] << " = " << a2[j] << endl;;
				del_num(a1,i,a1Size);
				a1Size = del_num(a1,i,a1Size);
				format_fun();
			}
		}
	}
	print_array(a1,a1Size);
}

int main() {
	int a1[] = {42,3,9,42,42,0,42,9,42,42,17,8,2222,4,9,0,1};
	int a2[] = {42,2222,9};

	compare_num(a1, 17, a2, 3);

	cout << endl;
	return 0;
}
