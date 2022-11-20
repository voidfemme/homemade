#include <iostream>
#include <iomanip>

int alternate_current(int current){
	if(current==1){
		return -1;
	}
	else{
		return 1;
	}
}

int dc(int current){
	return 1;
}
int main(){
	bool power = true;
	int current;
}
