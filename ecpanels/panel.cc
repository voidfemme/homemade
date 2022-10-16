#include <iostream>
#include <iomanip>

int PowerSource(int voltage){
	return 24;
}

int Relay(){

}

int main(){

	int voltage = 0;

	std::cout << "Input Power Source Voltage: ";
	std::cin >> voltage;


	voltage = PowerSource(voltage);
}
