#include "panel-1.h"
#include <iomanip>

PowerSupply::PowerSupply(){
	int voltage = 0;
	int amperage = 0;
	int phase = 0;
	int current_flow = 0;
	bool is_ac = false;
}

PowerSupply::PowerSupply(int voltage, int amperage, int phase, int current_flow, int is_ac){

}

Relay::Relay(){
	bool power = false;
	int input_signal = 0;
	int output_signal = 0;
}

Relay::Relay(bool power, int contact_a, int contact_b){
	if(power==true){
		
	}
}


// I need to learn some more about polymorphism, so that I can give all my electrical components the same couple of lines. for now, I will use what I am already familiar with.
//
// perhaps my first program to emulate panels should begin with thinking how to emulate signals between components. I want to be able to give one function the ability to pass it's result to a different function. Perhaps I can do this via a global array? or I can pass all my variables all by reference?
// bus 4239 driver hit a motorcyclist just after the terminal
//
