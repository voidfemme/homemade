#pragma once
#include <iostream>

class PowerSupply(){
	private:
		float voltage;
		float amperage;
		int phase;
		int current_flow; // needs better name; this variable will dictate the state
				  // 	of the power supply: DC will only return 1, AC will
				  // 	alternate between 1 and -1; off returns 0.
	public:
		PowerSupply();
		PowerSupply(int);
		void SetSupply(int);
		void PrintSupply(int);
};

class Relay(){
	// A relay, if on, will allow other programs to communicate, otherwise, it will
	// dump the signal rather than return it to another programs
	private:
	public:
		
};

class Transformer(){
	private:
	public:
};

class Display(){
	private:
	public:
};

class IOPorts(){
	private:
	public:
};
